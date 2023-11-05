#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a dog structure with provided information.
 * @d: A pointer to the dog structure to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes the fields of a dog structure
 * with the provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
