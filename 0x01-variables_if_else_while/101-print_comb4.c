#include <stdio.h>

/**
 * main - Program entry point. Prints all possible different combinations
 *        of three digits between 0 and 9.
 *
 * Description: This program prints all distinct combinations of 3 different
 * digits between 0 and 9, treating permutations of the same 3 digits as
 * equivalent and printing only the smallest combination. The combinations are
 * separated by commas and spaces, and each combination is followed by a
 * newline character.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar('0' + digit1);
				putchar('0' + digit2);
				putchar('0' + digit3);

				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
