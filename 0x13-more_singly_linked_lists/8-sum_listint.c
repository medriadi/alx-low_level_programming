#include "lists.h"

/**
 * sum_listint - sums up all the data in a linked list
 * @head: head of the list
 *
 * Description: This function iterates through the linked list, summing up the
 * values of each node until it reaches the end of the list. If the list is
 * empty (i.e., the head pointer is NULL), the function returns 0.
 *
 * Return: The sum of the values of all nodes in the list,
 *			or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
