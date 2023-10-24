#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a character.
 * @s: A pointer to a pointer to a character.
 * @to: A pointer to a character.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
