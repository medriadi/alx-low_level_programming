#include <stdio.h>

/**
 * main - Program entry point. Prints the lowercase and uppercase alphabets
 *        followed by a newline.
 *
 * Description: This program prints the lowercase alphabet from 'a' to 'z' and
 * the uppercase alphabet from 'A' to 'Z', followed by a newline character.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}
