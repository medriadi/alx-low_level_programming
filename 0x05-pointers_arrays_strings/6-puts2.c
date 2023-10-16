#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print one character out of 2 of a string.
 * @str: A pointer to a null-terminated string.
 *
 * Description: This function prints every other character of the input string,
 * starting with the first character, followed by a newline character.
 */
void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}

	_putchar('\n');
}
