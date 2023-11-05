#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog.
 * @d: A pointer to the dog structure to be printed.
 *
 * Description: This function prints the information about a dog,
 * including its name, age, and owner. If any of these elements are
 * NULL, it prints "(nil)" in their place.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", (d->age >= 0) ? d->age : 0.000000);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
