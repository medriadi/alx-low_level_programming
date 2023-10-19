#include "main.h"

/**
 * _strcat - Concatenate two strings with buffer overflow protection.
 *
 * @dest: Destination string to which src is appended.
 * @src: Source string to be concatenated to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (i < MAX_BUFFER_SIZE - 1) {
			dest[i] = src[j];
			i++;
		}
	}

	dest[i] = '\0';

	return dest;
}
