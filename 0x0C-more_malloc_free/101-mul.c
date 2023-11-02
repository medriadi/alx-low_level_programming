#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the arguments.
 * Return: 0 for success, 98 for incorrect argument count.
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		_puts("Error");
		_exit(98);
	}
	else
	{
		n1 = _atoi(argv[1]);
		n2 = _atoi(argv[2]);
		mul = n1 * n2;
		_print(mul);
		_putchar('\n');
	}

	_exit(0);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 * Return: The integer value.
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
		}
		else
		{
			_puts("Error");
			_exit(98);
		}
		i++;
	}

	return (n);
}

/**
 * _print - Prints an integer.
 * @n: The integer to print.
 */
void _print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		_print(n / 10);
	}
	_putchar(n % 10 + '0');
}
