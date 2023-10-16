#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers.
 * @a: A pointer to an array of integers.
 * @n: The number of elements to be printed.
 *
 * Description: This function prints the elements of the array, separated by a
 * comma and a space, followed by a new line.
 */
void print_array(int *a, int n)
{
	int b, num;

	num = n - 1;

	for (b = 0; b <= num; b++)
	{
		printf("%d", a[b]);

		if (b < num)
		{
			printf(", ");
		}
	}
	printf("\n");
}
