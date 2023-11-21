#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the head of the list
 *
 * This function removes the head node from the linked list and returns the
 * integer value stored in the node. If the list is empty (indicated by a
 * NULL head pointer), the function returns 0. Otherwise, it temporarily
 * stores the head node in a variable (popped), retrieves the integer value
 * from the node, frees the node, advances the head pointer to the next node,
 * and then returns the integer value.
 *
 * Return: The integer value stored in the deleted node,
 *			or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;

	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	free(popped);

	*head = (*head)->next;
	return (content);
}
