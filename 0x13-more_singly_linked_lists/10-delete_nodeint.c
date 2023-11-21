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
	listint_t *node, *prev_node;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;

	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}

		i++;
		prev_node = node;
		node = node->next;
	}

	return (-1);
}
