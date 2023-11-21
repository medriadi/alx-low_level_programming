#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: A pointer to the head of the list
 *
 * This function traverses the linked list starting from the head, incrementing
 * a counter for each node it encounters. The function continues until it
 * reaches the end of the list (indicated by a NULL pointer).
 *
 * Return: The total number of nodes in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
