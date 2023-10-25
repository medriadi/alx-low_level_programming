#include "main.h"

/**
 * wildcmp - Compares two strings with '*' as a wildcard using recursion.
 * @s1: The first string.
 * @s2: The second string with '*' as a wildcard.
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*(s2 + 1) == '\0')
			return (1);
		else
			return (wildcmp_helper(s1, s2 + 1, s1, s2));
	}
	else if (*s1 == '\0' || *s2 == '\0')
		return ((*s1 == *s2));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}

/**
 * wildcmp_helper - Helper function for wildcard matching.
 * @s1: The first string.
 * @s2: The second string with '*' as a wildcard.
 * @s1_start: The starting point of s1 for backtracking.
 * @s2_start: The starting point of s2 for backtracking.
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp_helper(char *s1, char *s2, char *s1_start, char *s2_start)
{
	if (*s1 == '\0')
		return (wildcmp(s1, s2));

	if (*s1 == *s2)
		return (wildcmp_helper(s1 + 1, s2 + 1, s1_start, s2_start));

	return (wildcmp_helper(s1_start + 1, s2_start, s1_start + 1, s2_start) &&
		   wildcmp(s1_start + 1, s2_start));
}
