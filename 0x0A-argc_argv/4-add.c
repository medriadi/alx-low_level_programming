#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Description: This program adds positive numbers provided as command-line
* arguments and handles error cases as specified in the question.
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int x;
	int y;
	int add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[x]);
		}
	}
	printf("%d\n", add);
	return (0);
}
