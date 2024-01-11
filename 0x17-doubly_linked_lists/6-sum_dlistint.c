#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all data in a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * This function iterates through the list, summing up the integer data
 * contained in each node. If the list is empty, it returns 0.
 *
 * Return: Sum of all data in the list.
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
