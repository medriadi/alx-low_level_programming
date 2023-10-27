#include "main.h"
#include <stdio.h>

/**
* _strpbrk - Search for a string of any set of bytes.
* @s: A pointer to the string to search in.
* @accept: A pointer to the string containing acceptable characters.
*
* Return: A pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
	int s_index, accept_index;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				return (&s[s_index]);
			}
		}
	}

	return (NULL);
}
