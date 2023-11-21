#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Description: This function deletes the node at the given index in the
 * linked list. If the index is out of bounds (i.e., less than 0 or greater
 * than the number of nodes in the list), the function does not delete the
 * node and returns -1.
 *
 * Return: 1 if the node was successfully deleted,
 *		  -1 if the index is out of bounds
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if (index < 0 || index >= list_len)
	return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			old_node = *head;
			if (i == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			previous_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((i + 1) == index)
		previous_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Description: This function traverses the linked list starting from the head,
 * counting the nodes until it reaches the end of the list.
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
