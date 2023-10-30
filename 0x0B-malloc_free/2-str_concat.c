#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string to concatenate to the first.
 *
 * Description:
 * This function concatenates the two input strings `s1` and `s2` and returns
 * a pointer to the newly allocated memory containing the concatenated string.
 * If NULL is passed, it is treated as an empty string.
 *
 * Return:
 * On success, the `str_concat` function returns a pointer to the concatenated
 * string. It returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < len2; j++)
		concatenated[i + j] = s2[j];

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
