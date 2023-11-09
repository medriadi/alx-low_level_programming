#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, separated by a specified
 *				   string, followed by a new line.
 * @separator: A pointer to a string that is printed between the numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int x = n;

	if (separator == NULL)
		separator = "";

	va_start(valist, n);
	if (x--)
		printf("%d", va_arg(valist, int));
	while (x-- > 0)
		printf("%s%d", separator, va_arg(valist, int));
	printf("\n");
	va_end(valist);
}
