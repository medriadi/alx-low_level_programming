#include <stdio.h>

/**
 * before_main - Function executed before main.
 *
 * Description: This function is executed before the main function and
 * prints two lines of text.
 *
 * Return: Void (no return value)
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
