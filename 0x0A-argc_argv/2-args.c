#include <stdio.h>

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Description: This program prints all the command-line arguments it receives
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
