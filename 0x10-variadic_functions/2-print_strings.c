#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings, separated by a specified
 *				   string, followed by a new line.
 * @separator: A pointer to a string that is printed between the strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *separatorstr;
	int x;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	x = 0;

	while (x < (int) n)
	{
		separatorstr = va_arg(valist, char *);
		if (separatorstr != NULL)
			printf("%s", separatorstr);
		else
			printf("(nil)");
		if (separator != NULL && x != (int) n - 1)
			printf("%s", separator);
		x++;
	}
	printf("\n");
	va_end(valist);
}
