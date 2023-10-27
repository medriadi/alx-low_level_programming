#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program multiplies two numbers and prints the result.
 * If the program doesn't receive two arguments, it prints Error and returns 1.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	return (0);
}
