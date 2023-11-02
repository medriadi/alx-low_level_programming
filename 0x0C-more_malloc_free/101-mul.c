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
		printf("Error\n");
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;

		printf("%d\n", mul);
	}

	return (0);
}
