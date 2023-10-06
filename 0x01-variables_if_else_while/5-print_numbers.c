#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints single-digit numbers from 0 to 9,
 * each followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');
	return (0);
}

