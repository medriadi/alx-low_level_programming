#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: A pointer to a destination buffer.
 * @src: A pointer to the source string to be copied.
 *
 * Description: This function copies the string pointed to by `src`, including
 * the terminating null byte `'\0'`, to the buffer pointed to by `dest`.
 *
 * Return: The pointer to `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
