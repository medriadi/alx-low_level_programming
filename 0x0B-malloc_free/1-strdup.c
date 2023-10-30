#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Description:
 * This function duplicates the input string `str` and returns a pointer to the
 * duplicated string. The memory for the new string is obtained with `malloc`
 * and can be freed with `free`.
 *
 * Return:
 * Success, the `_strdup` function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available or if `str` is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
