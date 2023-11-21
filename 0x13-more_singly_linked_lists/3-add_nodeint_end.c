#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list
 * @head: Pointer to the head of the list
 * @n: Number to be used as content of the new node
 *
 * This function creates a new node, assigns the input number to the new node's
 * integer value, and then appends it to the end of the list. If the list is
 * empty (indicated by a NULL head), the new node becomes the head of the list.
 * If the memory allocation for the new node fails, the function returns NULL.
 *
 * Return: Address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *cursor = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;

		cursor->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
