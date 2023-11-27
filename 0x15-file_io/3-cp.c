#include "main.h"

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @file_name: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *file_name)
{
	char *file_buffer;

	file_buffer = malloc(sizeof(char) * 1024);

	if (file_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_name);
		exit(99);
	}

	return (file_buffer);
}

/**
 * close_file_descriptor - Closes file descriptors.
 * @file_desc: The file descriptor to be closed.
 */
void close_file_descriptor(int file_desc)
{
	int result;

	result = close(file_desc);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argument_count: The number of arguments supplied to the program.
 * @arguments: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argument_count, char *arguments[])
{
	int source_file, destination_file, read_result, write_result;
	char *file_buffer;

	if (argument_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_buffer = allocate_buffer(arguments[2]);
	source_file = open(arguments[1], O_RDONLY);
	read_result = read(source_file, file_buffer, 1024);
	destination_file = open(arguments[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_file == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", arguments[1]);
			free(file_buffer);
			exit(98);
		}
		write_result = write(destination_file, file_buffer, read_result);
		if (destination_file == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", arguments[2]);
			free(file_buffer);
			exit(99);
		}
		read_result = read(source_file, file_buffer, 1024);
		destination_file = open(arguments[2], O_WRONLY | O_APPEND);

	} while (read_result > 0);

	free(file_buffer);
	close_file_descriptor(source_file);
	close_file_descriptor(destination_file);

	return (0);
}
