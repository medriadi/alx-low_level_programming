#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 * @array: The pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: Int.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump, i;

	if (!array)
		return (-1);
	jump = sqrt(size);

	for (i = 0; i < (int)size && array[i] < value; i += jump)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%d] and [%d]\n", i - jump, i);

	for (i -= jump; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
