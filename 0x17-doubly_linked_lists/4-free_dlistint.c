#include "lists.h"

/**
 * free_dlistint - Free all nodes in a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * This function iteratively traverses a doubly linked list, freeing each node.
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
