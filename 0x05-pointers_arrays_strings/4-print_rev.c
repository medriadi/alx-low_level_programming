#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string, in reverse, followed by a new line.
 * @str: A pointer to a null-terminated string.
 *
 * Description: This function reverses the characters of the input string and
 * prints them to the standard output, followed by a newline character.
 */
void print_rev(char *str)
{
	int index;
	int character;

	for (index = 0; str[index] != '\0'; index++)
	{
	}

	for (index = index - 1; index >= 0; index--)
	{
		character = str[index];
		_putchar(character);
	}

	_putchar('\n');
}
