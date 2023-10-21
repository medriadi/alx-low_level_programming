#include <stdio.h>

/**
 * main - Program entry point. Prints the lowercase alphabet in reverse,
 *        followed by a newline.
 *
 * Description: This program prints the lowercase alphabet in reverse order,
 * starting from 'z' and ending at 'a', followed by a newline character.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}

