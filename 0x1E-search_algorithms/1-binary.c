#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
    int above, mid, below;
    int x;

    if (array == NULL)
    {
        return (-1);
    }

    below = 0;
    above = size - 1;

    while (below <= above)
    {
        mid = (below + above) / 2;

        printf("Searching in array: ");
        for (x = below; x <= above; x++)
            printf("%i%s", array[x], x == above ? "\n" : ", ");

        if (array[mid] < value)
            below = mid + 1;
        else if (array[mid] > value)
            above = mid - 1;
        else
            return (mid);
    }

    return (-1);
}
