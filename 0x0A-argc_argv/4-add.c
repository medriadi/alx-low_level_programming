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
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int x = 1; x < argc; x++)

	{
		int num = 0;

		for (int y = 0; argv[x][y] != '\0'; y++)

		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[x][y] - '0');
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
