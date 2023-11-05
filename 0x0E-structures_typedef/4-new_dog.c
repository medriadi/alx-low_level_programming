#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog and copies the name and owner.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Return: A pointer to the newly created dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *django;
	char *name_copy, *owner_copy;
	int name_length = 0, owner_length = 0;
	int i;

	django = malloc(sizeof(struct dog));
	if (django == NULL)
		return (NULL);

	while (name[name_length] != '\0')
		name_length++;

	while (owner[owner_length] != '\0')
		owner_length++;

	name_copy = malloc(sizeof(char) * (name_length + 1));
	if (name_copy == NULL)
	{
		free(django);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * (owner_length + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(django);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
		name_copy[i] = name[i];

	for (i = 0; i <= owner_length; i++)
		owner_copy[i] = owner[i];


	django->name = name_copy;
	django->age = age;
	django->owner = owner_copy;

	return (django);
}
