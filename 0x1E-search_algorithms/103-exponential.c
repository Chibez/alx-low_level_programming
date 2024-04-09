#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index of the first occurrence of `value`, or -1 if `value` is
 * not found or `array` is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (!array || size == 0)
        return (-1);

    // Find the appropriate range using exponential search
    for (; bound < size && array[bound] < value; bound *= 2)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
    }

    size_t low = bound / 2;
    size_t high = min(bound, size - 1);

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    // Perform binary search within the identified range
    return binary_search_helper(array, value, low, high);
}

