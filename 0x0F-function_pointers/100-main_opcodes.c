#include <stdlib.h>
#include <stdio.h>
/**
* main - Print the opcode of its own function
*
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
*
* Return: Exit 1 if one argument is not correct, 2 if the byte is negative.
*/
int main(int argc, char *argv[])
{
	short bytes, x;

	if (argc != 2)
{
	printf("Error: Incorrect number of arguments. Usage: main <bytes>\n");
	exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
	printf("Error: Byte cannot be negative.\n");
	exit(2);
}

printf("%02x", *((unsigned char *) (main)));

for (x = 1; x < bytes; ++x)
{
	printf(" %02x", *((unsigned char *) (main + x)));
}

putchar('\n');
exit(EXIT_SUCCESS);
}
