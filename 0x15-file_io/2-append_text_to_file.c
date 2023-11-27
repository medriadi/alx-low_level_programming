#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: On success, 1. On failure, -1 with specific conditions:
 *         -1 if the function fails or filename is NULL
 *         -1 if the file doesn't exist or the user lacks write permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	write_status = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || write_status == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
