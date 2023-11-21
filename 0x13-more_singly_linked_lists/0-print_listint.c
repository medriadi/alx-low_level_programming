#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * This function iterates through the linked list, starting from the head,
 * and prints the integer value of each node. It also increments a counter
 * for each node traversed.
 *
 * Return: The number of nodes traversed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while
	(cursor != NULL)
	{
	   printf("%d\n", cursor->n);
	   count += 1;
	   cursor = cursor->next;
	}
	return (count);
}
