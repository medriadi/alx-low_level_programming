#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers range from 'min' to 'max'.
 * @min: The minimum integer value in the range.
 * @max: The maximum integer value in the range.
 * Return: A pointer to the dynamically allocated array or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		*(p + x) = min;

	return (p);
}
