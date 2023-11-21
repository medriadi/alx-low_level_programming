#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 *
 * Description: This function traverses the linked list starting from the head,
 * counting the nodes until it reaches the node at the given index.
 * If the node does not exist (i.e., the index is greater than the
 * number of nodes in the list), the function returns NULL.
 *
 * Return: the address of the node at the given index,
 *			or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			cursor = head;
			break;
		}
		head = head->next;
		i++;
	}
	return (cursor);
}
