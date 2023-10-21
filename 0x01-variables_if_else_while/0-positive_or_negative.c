#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Description: Program generates a random number, checks if it's positive,
 * zero, or negative, and then prints the result to the standard output.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
