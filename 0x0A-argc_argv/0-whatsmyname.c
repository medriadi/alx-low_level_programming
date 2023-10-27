#include <stdio.h>

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Description: This program prints its own name when executed.
*
* Return: 0 on success, 1 if unable to retrieve the program name.
*/
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		fprintf(stderr, "Unable to retrieve program name.\n");
		return (1);
	}
}
