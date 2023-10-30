#include <stdlib.h>

/**
 * create_array - Creates an array of chars.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Description:
 * This function creates an array of characters with the specified size
 * and initializes each element with the given character 'c'.
 *
 * Return:
 * If memory allocation fails or size is 0, it returns NULL. Otherwise,
 * it returns a pointer to the created array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
