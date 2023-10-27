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
	int change = 0;

	char *p;

	int coins[] = {25, 10, 5, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int input = strtol(argv[1], &p, 10);

	if (*p != '\0' || input <= 0)
	{
		printf("Error\n");
		return (1);
	}

	for (int x = 0; x < sizeof(coins) / sizeof(coins[0]); x++)

	{
		while (input >= coins[x])
		{
			change += input / coins[x];
			input %= coins[x];
		}
	}

	printf("%d\n", change);
	return (0);
}
