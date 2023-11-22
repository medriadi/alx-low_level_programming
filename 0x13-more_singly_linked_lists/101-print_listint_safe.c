#include "lists.h"

/**
* print_listint_safe - prints a linked list
* @head: pointer to the head of the list
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	struct listint_t *visited[100];
	size_t visited_count = 0;

	while (current != NULL)
	{
		bool is_visited = false;

		for (size_t i = 0; i < visited_count; i++)
		{
			if (visited[i] == current)
			{
				is_visited = true;
				break;
			}
		}

		if (!is_visited)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			visited[visited_count++] = (struct listint_t *)current;
			count++;
		}
		else
		{
			printf("Loop detected at node %p\n", (void *)current);
			break;
		}

		current = current->next;
	}

	return (count);
}
