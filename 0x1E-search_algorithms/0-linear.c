#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm.
 * @array: The pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: Int.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);
	while (idx < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, (int)array[idx]);
		if (value == array[idx])
			return (idx);
		idx++;
	}
	return (-1);
}
