#include <stdio.h>

/**
 * main - Program entry point. Prints single-digit numbers from 0 to 9,
 *        each followed by a new line.
 *
 * Description: This program prints single-digit numbers from 0 to 9, with
 * each number followed by a newline character.
 *
 * Return: Always returns 0 to indicate success.
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

