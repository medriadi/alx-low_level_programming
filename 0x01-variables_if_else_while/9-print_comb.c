#include <stdio.h>

/**
 * main - Program entry point. Prints numbers between 0 to 9 with commas and
 *        spaces between them, in ascending order.
 *
 * Description: This program prints numbers between 0 and 9 with commas and
 * spaces between them, in ascending order, followed by a newline character.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
