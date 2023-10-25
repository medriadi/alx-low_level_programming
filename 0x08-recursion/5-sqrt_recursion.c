#include "main.h"

/**
* _sqrt_recursion - Returns the natural square root of a number
* using recursion.
* @n: The number for which to calculate the square root.
*
* Return: The natural square root of 'n'.
* If 'n' does not have a natural square root, returns -1.
*/
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
* sqrt_helper - Helper function to calculate the natural square root
* using recursion.
* @n: The number for which to calculate the square root.
* @guess: The current guess for the square root.
*
* Return: The natural square root of 'n'.
* If 'n' does not have a natural square root, returns -1.
*/
int sqrt_helper(int n, int guess)
{
	if (n < 0)
		return (-1);

	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (sqrt_helper(n, guess + 1));
}
