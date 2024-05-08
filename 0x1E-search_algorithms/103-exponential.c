#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: The pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: Int.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (!array)
		return (-1);
	end = 1;
	start = 1;

	while (end < size)
	{
		if (value < array[end])
			break;
		printf("Value checked array[%d] = [%d]\n", (int) end, array[end]);
		start = end;
		end = end * 2;
	}
	i = end < size - 1 ? end : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int) start, (int) i);
	return (binary_helper(array, value, end / 2, i));
}

/**
 * binary_helper - searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: The pointer to the first element of the array.
 * @value: The value to search for.
 * @low: The low.
 * @high: The high.
 *
 * Return: Int.
 */

int binary_helper(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	print_helper(array, low, high);

	if (high == low && array[low] != value)
		return (-1);

	mid = ((high - low) / 2) + low;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (binary_helper(array, value, low, mid - 1));
	if (array[mid] < value)
		return (binary_helper(array, value, mid + 1, high));
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
