#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count (number of arguments).
 * @av: An array of argument strings.
 *
 * Description:
 * This function concatenates all the arguments of the program, each separated
 * by a newline character '\n', into a single string.
 *
 * Return:
 * On success, the `argstostr` function returns a pointer to the concatenated
 * string. It returns NULL if ac == 0 or av == NULL or if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}

	concatenated = (char *)malloc(total_length * sizeof(char) + 1);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[k++] = av[i][j];
		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}
