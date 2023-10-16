#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculate the length of a string.
 * @s: A pointer to a null-terminated string.
 *
 * Description: This function computes the length of the input string by
 * counting the number of characters until it reaches the null terminator.
 *
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
