#include "main.h"

/**
 * clear_bit - Sets a bit at a specific position to 0 in an unsigned long int
 * @n: Pointer to the number to be modified
 * @index: Index of the bit to be cleared (starting from 0)
 *
 * Description: This function clears the bit at the given index in the
 * unsigned long int number pointed to by 'n'. If 'n' is NULL or if the
 * index is out of the valid range, the function returns -1. Otherwise, it
 * sets the bit at the specified index to 0 using bitwise manipulation.
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
