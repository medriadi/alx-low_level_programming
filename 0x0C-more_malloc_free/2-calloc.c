#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array of elements using malloc.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size (in bytes) of each element.
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	char *s;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (p);

	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	s = (char *)p;
	for (x = 0; x < (nmemb * size); x++)
		*(s + x) = 0;

	return (s);
}
