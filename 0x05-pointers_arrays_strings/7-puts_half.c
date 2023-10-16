#include "main.h"
#include <stdio.h>
/**
 * puts_half - Print half of a string.
 * @str: A pointer to a null-terminated string.
 *
 * Description: This function prints the second half of the input string, or if
 * the number of characters is odd, it prints the last n characters, where
 * n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
