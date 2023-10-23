#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: A pointer to the 1D array representing the square matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum_main = 0;
	int sum_other = 0;
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		sum_main += a[row * size + row];
		sum_other += a[row * size + (size - 1 - row)];
	}

	printf("%d, %d\n", sum_main, sum_other);
}
