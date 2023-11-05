#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory of a dog structure.
 * @d: Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
