#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the new sorted hash table.
 *
 * Return: A pointer to the new sorted hash table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int m;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    for (m = 0; m < size; m++)
        ht->array[m] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new, *tmp;
    char *value_copy;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->shead;

    while (tmp != NULL && strcmp(tmp->key, key) != 0)
        tmp = tmp->snext;

    if (tmp != NULL)
    {
        free(tmp->value);
        tmp->value = value_copy;
        return (1);
    }

    new = malloc(sizeof(shash_node_t));
    if (new == NULL)
    {
        free(value_copy);
        return (0);
    }

    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(value_copy);
        free(new);
        return (0);
    }

    new->value = value_copy;
    new->next = ht->array[index];
    ht->array[index] = new;

    shash_insert_sorted(ht, new);

    return (1);
}

/**
 * shash_insert_sorted - Inserts a node into a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @new: The new node to insert.
 */
void shash_insert_sorted(shash_table_t *ht, shash_node_t *new)
{
    shash_node_t *tmp;

    if (ht->shead == NULL)
    {
        new->sprev = NULL;
        new->snext = NULL;
        ht->shead = new;
        ht->stail = new;
    }
    else if (strcmp(ht->shead->key, new->key) > 0)
    {
        new->sprev = NULL;
        new->snext = ht->shead;
        ht->shead->sprev = new;
        ht->shead = new;
    }
    else
    {
        tmp = ht->shead;
        while (tmp->snext != NULL && strcmp(tmp->snext->key, new->key) < 0)
            tmp = tmp->snext;

        new->sprev = tmp;
        new->snext = tmp->snext;

        if (tmp->snext == NULL)
            ht->stail = new;
        else
            tmp->snext->sprev = new;

        tmp->snext = new;
    }
}

/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *node;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (NULL);

    node = ht->shead;

    while (node != NULL && strcmp(node->key, key) != 0)
        node = node->snext;

    return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;

    node = ht->shead;
    printf("{");
    while (node != NULL)
