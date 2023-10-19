#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy a string up to a specified number of characters.
 *
 * @dest: The destination string where characters are copied.
 * @src: The source string from which characters are copied.
 * @n: The number of characters to copy from src to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (a != n)
	{
		dest[a] = src[b];

		if (src[a] == '\0')
		{
			dest[b] = '\0';
			break;
		}
		a++;
		b++;
	}
	while (b != n)
		dest[b++] = '\0';

	return (dest);
}
