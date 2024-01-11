#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieve the nth node in a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve. Indices start from 0.
 *
 * This function iterates through the list until it reaches the desired index.
 * If the node at the given index exists, it returns a pointer to that node.
 * If the node does not exist, it returns NULL.
 *
 * Return: Pointer to the nth node in the list,
 *		   or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
