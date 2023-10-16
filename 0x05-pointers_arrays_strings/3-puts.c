#include "main.h"
#include <stdio.h>

/**
 * _puts - Print a string, followed by a new line, to stdout.
 * @str: A pointer to a null-terminated string.
 *
 * Description: This function prints the characters of the input string to
 * the standard output, followed by a newline character, effectively printing
 * the string and ending with a new line.
 */
void _puts(char *str)
{
	int index;
	int character;

	for (index = 0; str[index] != '\0'; index++)
	{
		character = str[index];
		_putchar(character);
	}
	_putchar('\n');
}
