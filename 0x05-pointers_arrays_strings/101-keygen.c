#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Description:
 * This program generates a random password that can be used as input for
 * the 101-crackme program. It uses the rand() function seeded with the current
 * time to create random characters and calculates a checksum to ensure
 * the password is valid.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int x = 0;

	srand(time(0));
	while (x < 2645)
	{
		c = (rand() % 94) + 32;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);
	return (0);
}
