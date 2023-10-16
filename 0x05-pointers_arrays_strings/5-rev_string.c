#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string.
 * @s: A pointer to a null-terminated string.
 *
 * Description: This function reverses the characters of the input string 
 * 				in place.
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
