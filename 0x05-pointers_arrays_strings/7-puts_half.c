#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print half of a string.
 * @str: Type char pointer
 *
 * Description: This function prints the second half of the input string.
 * If the number of characters is odd, it prints the last n characters, where
 * n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		n++;
	}

	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]); 
	}

	_putchar('\n');
}
