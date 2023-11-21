#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to the head of the list
 *
 * This function traverses the linked list starting from the head, freeing
 * each node along the way. It does this by temporarily storing the current
 * node in a variable (temp), advancing the head pointer to the next node,
 * and then freeing the current node. The function continues until it
 * reaches the end of the list (indicated by a NULL head pointer).
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
