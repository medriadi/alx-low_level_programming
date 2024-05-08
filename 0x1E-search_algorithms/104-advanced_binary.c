#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array
 * of integers using the Advanced search algorithm.
 * @array: The pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: Int.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (adv_bhelper(array, value, 0, size - 1));
}

/**
 * adv_bhelper - searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: The pointer to the first element of the array.
 * @value: The value to search for.
 * @low: The low.
 * @high: The high.
 *
 * Return: Int.
 */

int adv_bhelper(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	print_helper(array, low, high);

	if (high == low && array[low] != value)
		return (-1);

	mid = ((high - low) / 2) + low;

	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (adv_bhelper(array, value, low, mid));
		else
			return (mid);
	}
	if (array[mid] < value)
		return (adv_bhelper(array, value, mid + 1, high));
	if (array[mid] > value)
		return (adv_bhelper(array, value, low, mid));
	return (-1);
}

/**
 * print_helper - searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: The pointer to the first element of the array.
 * @start: The number of elements in array.
 * @end: The value to search for.
 *
 * Return: Void.
 */

void print_helper(int *array, int start, int end)
{
	printf("Searching in array: ");

	for (; start <= end; start++)
	{
		if (start == end)
			printf("%d\n", array[start]);
		else
			printf("%d, ", array[start]);
	}
}
