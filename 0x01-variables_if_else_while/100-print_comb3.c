#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Description: This program prints all distinct combinations of two digits
 * between 0 and 9, treating "01" and "10" as the same combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
		{
			putchar('0' + first_digit);
			putchar('0' + second_digit);

			if (first_digit != 8 || second_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
