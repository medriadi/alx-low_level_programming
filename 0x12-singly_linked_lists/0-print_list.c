#include "lists.h"

/**
* print_list - Print all the elements of a list_t list
* @h: A pointer to the head of the list
* Return: The number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", (h->str != NULL) ? h->len : 0);
		printf("%s\n", (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}
