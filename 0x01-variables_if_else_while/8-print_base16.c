#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints numbers between 0 to 9 and letters between
 * 'a' to 'f' in lowercase in base 16, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
