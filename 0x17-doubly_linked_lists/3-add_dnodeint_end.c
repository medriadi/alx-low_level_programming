#include "lists.h"

/**
 * add_dnodeint_end - Append a new node at the end of a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @n: Integer data to be added to the new node.
 *
 * This function creates a new node, assigns the input data to it,
 * and appends it at the end of the list.
 * If the list is empty, the new node becomes the head.
 * If memory allocation fails, it returns NULL.
 * Otherwise, it updates the next pointer of the last node and
 * sets the new node as the last node of the list.
 *
 * Return: Pointer to the newly added node, or NULL if memory allocation fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = new_node;
	new_node->prev = *head;

	return (new_node);
}
