#include "main.h"

/**
 * _strncat - Concatenate two strings with buffer overflow protection.
 *
 * @dest: The destination string to which src is appended.
 * @src: The source string to be concatenated to dest.
 * @n: The number of elements to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
