#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Description: This program generates a random number, calculates its last
 * digit, and checks if the last digit is greater than 5, equal to 0, or less
 * than 6 and not equal to 0. It then prints the result to the standard output.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
