#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - A function that calculates the sum of all its parameters.
* @n: The number of parameters. It is of type unsigned int.
*
* This function uses the variadic functions in C to take in a variable number
* of parameters. It then sums up all these parameters and returns the sum.
* If the number of parameters is zero, it returns zero.
*
* Return: The sum of all parameters. If no parameters are given, return 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;

	unsigned int x;

	va_list valist;


	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = x = 0;
	while (x < n)
	{
		sum = sum + va_arg(valist, int);
		x++;
	}
	va_end(valist);
	return (sum);
}
