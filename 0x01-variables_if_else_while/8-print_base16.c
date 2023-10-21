#include <stdio.h>

/**
 * main - Program entry point. Prints numbers in base 16 (0 to 9) and
 *        lowercase letters 'a' to 'f', followed by a newline.
 *
 * Description: This program prints numbers in base 16 (0 to 9) and lowercase
 * letters 'a' to 'f', followed by a newline character.
 *
 * Return: Always returns 0 to indicate success.
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
