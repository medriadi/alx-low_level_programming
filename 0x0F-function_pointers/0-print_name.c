#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that prints a given name using a provided function
 * @name: A pointer to a character string representing the name to be printed
 * @f: A pointer to a function that takes a character pointer as an argument
 *     and performs a specific action
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		exit(EXIT_FAILURE);
	}
	f(name);
}
