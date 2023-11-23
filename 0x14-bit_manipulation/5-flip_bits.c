#include "main.h"

/**
 * flip_bits - Gets the number of bits to flip to get from n to m
 * @n: Initial number
 * @m: Final number
 *
 * Return: Number of flipped bits needed to convert 'n' to 'm'
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped)
	{
		flipped &= (flipped - 1);
		count++;
	}

	return (count);
}
