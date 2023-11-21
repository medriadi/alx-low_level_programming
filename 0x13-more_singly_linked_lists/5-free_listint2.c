#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Pointer to the head of the list
 *
 * This function traverses the linked list starting from the head, freeing
 * each node along the way. It does this by temporarily storing the current
 * node in a variable (cursor), freeing the current node, and then advancing
 * the head pointer to the next node. The function continues until it
 * reaches the end of the list (indicated by a NULL head pointer). After
 * freeing all nodes, it sets the head pointer to NULL.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
