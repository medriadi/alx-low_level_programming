#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: The binary number as a string
*
* Return: The converted number, or 0 if there is one or more chars in
* the string b that is not 0 or 1 or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;


	if (b == NULL || *b == '\0')
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		decimal = (decimal * 2) + (*b - '0');
		b++;
	}

	return (decimal);
}
