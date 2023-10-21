#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Description: This program prints the lowercase alphabet from 'a' to 'z'
 * followed by a newline character.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
