#include "main.h"

/**
 * get_bit - retrieves the value of a bit at a given index within a number
 * @n: the number from which to retrieve the bit
 * @index: index starting from 0 of the bit to retrieve
 *
 * Return: The value of the bit at the specified index,
 *         or -1 if an error occurs (e.g., index is out of range)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
