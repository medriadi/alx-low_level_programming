#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates the first occurrence of a character in a string.
 * @s: A pointer to the string to search in.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence of the character `c`
 * in the string `s`,or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
