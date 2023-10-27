#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Description: This program calculates and prints the minimum number of coins
* needed to make change for a given amount of money in cents.
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int change, input;
	unsigned int x;
	char *p;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = strtol(argv[1], &p, 10);
	change = 0;

	if (!*p)
	{
		while (input > 1)
		{
			for (x = 0; x < sizeof(coins[x]); x++)
			{
				if (input >= coins[x])
				{
					change += input / coins[x];
					input %= coins[x];
				}
			}
		}
		if (input == 1)
			change++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", change);
	return (0);
}
