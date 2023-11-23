#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * This function determines whether the machine is little endian or big endian
 * by creating an integer with a value of 1 and examining the memory location
 * of the first byte to determine its endianness.
 *
 * Return: 1 if the machine is little endian, 0 if it's big endian
 */
int get_endianness(void)
{
	unsigned int test = 1;

	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
