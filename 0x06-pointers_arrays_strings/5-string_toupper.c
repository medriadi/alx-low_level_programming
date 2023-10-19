#include "main.h"

/**
 * string_toupper - Convert a string to uppercase.
 *
 * @a: The string to be converted to uppercase.
 *
 * Return: A pointer to the modified string 'a'.
 */
char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] -= 32;
		}
	}
	return (a);
}
