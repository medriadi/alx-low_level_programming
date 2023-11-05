#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from wiyh a new line.
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
