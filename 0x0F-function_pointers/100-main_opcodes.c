#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints the opcodes of its own main function.
* @argc: The number of command-line arguments.
* @argv: The array of command-line arguments.
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		fprintf(stderr, "Error\n");
		exit(2);
	}

	unsigned char *code = (unsigned char *) &main;

	for (int i = 0; i < num_bytes; i++)

	{
		printf("%02x", code[i]);
	}
	printf("\n");

	return (0);
}
