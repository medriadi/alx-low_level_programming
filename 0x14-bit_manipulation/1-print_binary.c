#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int number to be printed in binary
 *
 * Description: This function recursively prints the binary representation
 *              of an unsigned long integer without using arrays, malloc,
 *              %, or / operators.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		if (n > 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
