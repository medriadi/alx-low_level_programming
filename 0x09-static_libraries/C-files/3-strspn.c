#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: A pointer to the string to search in.
 * @accept: A pointer to the string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of s consisting only of
 * bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int s_index, accept_index, match;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		match = 0;
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
		length++;
	}

	return (length);
}
