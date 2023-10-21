#include <stdio.h>

/**
 * main - Program entry point. Prints the lowercase alphabet excluding
 *        'e' and 'q'followed by a newline.
 *
 * Description: This program prints the lowercase alphabet from 'a' to 'z',
 * excluding the letters 'e' and 'q', followed by a newline character.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');
	return (0);
}
