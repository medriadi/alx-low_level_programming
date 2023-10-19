#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 *
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int x;
	int flag;

	x = 0;
	n = n - 1;
	while (x < n)
	{
		flag = a[x];
		a[x] = a[n];
		a[n] = flag;
		x++;
		n--;
	}
}
