#include "lists.h"

/**
 * add_dnodeint - Insert a new node at the beginning of a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @n: Integer data to be added.
 *
 * This function creates a new node, assigns the input data to it,
 * and inserts it at the beginning of the list. If memory allocation fails,
 * it returns NULL. Otherwise, it updates the previous pointer of the
 * former head node and sets the new node as the head of the list.
 *
 * Return: Pointer to the newly added node, or NULL if memory allocation fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
