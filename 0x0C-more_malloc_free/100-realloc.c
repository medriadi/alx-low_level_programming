#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocate memory for a pointer using malloc and free.
 * @ptr: A pointer to the previously allocated memory.
 * @old_size: The size, in bytes, of the old memory block.
 * @new_size: The new size, in bytes, for the memory block.
 *
 * Return: A pointer to the newly allocated memory or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}
