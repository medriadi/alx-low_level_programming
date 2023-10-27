#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare two strings.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: An integer less than, equal to, or greater than zero, depending on
 * whether s1 is less than, equal to, or greater than s2, respectively.
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
