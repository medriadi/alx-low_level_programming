#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Pointer to the head of the list
 *
 * Description: This function traverses the linked list starting from the head,
 * freeing each node along the way. It does this by temporarily storing the
 * current node in a variable (cursor), advancing the head pointer to the next
 * node, and then freeing the current node. The function continues until it
 * reaches the end of the list (indicated by a NULL head pointer). After
 * freeing all nodes, it sets the head pointer to NULL.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cursor;

	if (head != NULL && *head != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			*head = (*head)->next;
			free(cursor);
		}

	  *head = NULL;
	}
}
