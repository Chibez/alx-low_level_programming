#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max (inclusive).
 * @min: The minimum value to start the array.
 * @max: The maximum value to end the array.
 *
 * This function creates an array of integers containing all values from 'min'
 * to 'max', inclusive. The newly created array is ordered from 'min' to 'max'.
 * If 'min' is greater than 'max' or if memory allocation fails, the function
 * returns NULL.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
