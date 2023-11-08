#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer in an array.
 * @array: A pointer to an array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function that compares values.
 *
 * Return: Returns the index of the first element for which the cmp function
 *         does not return 0. Returns -1 if size <= 0 or if no elements
 *         match the cmp function.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(*(array + x)))
			return (x);
	}
	return (-1);
}
