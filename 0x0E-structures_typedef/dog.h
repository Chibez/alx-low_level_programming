#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure.
 * @d: A pointer to the dog structure to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes the members of a dog structure
 * with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints information about a dog.
 * @d: A pointer to the dog structure to print.
 *
 * Description: This function prints the name, age, and owner of the dog.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 * Return: A pointer to the newly created dog structure,
 * or NULL on failure.
 * and initializes its members with the provided
 * values for name, age, and owner.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: A pointer to the dog structure to free.
 *
 * Description: This function frees the memory
 * allocated for a dog structure
 * created using the new_dog function.
 */
void free_dog(dog_t *d);

#endif

