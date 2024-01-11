#include "lists.h"

/**
 * dlistint_len - Count the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * This function iteratively traverses a linked list, incrementing a counter
 * for each node encountered. When it encounters a node where the next pointer
 * is NULL, indicating the end of the list, it returns the count.
 *
 * Return: Number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
