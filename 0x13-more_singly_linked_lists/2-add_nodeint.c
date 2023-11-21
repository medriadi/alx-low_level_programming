#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 * @n: The integer for the new node to contain
 *
 * This function creates a new node, assigns the input integer to the node's
 * integer value, and then inserts the new node at the beginning of the list.
 * If the memory allocation for the new node fails, the function returns NULL.
 *
 * Return: NULL if the function fails, otherwise the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
