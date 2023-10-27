#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string into an integer.
 * @s: A pointer to the input string.
 *
 * Description: Function takes a string as input, converts it to an integer,
 * and returns the result. It handles signs (positive and negative) and skips
 * any non-numeric characters before the number.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int num, a, flag;

	flag = 1;
	a = num = 0;

	while (((s[a] < '0') || s[a] > '9') && s[a] != 0)
	{
		if (s[a] == '-')
			flag = flag * -1;
		a++;
	}

	while (((s[a] >= '0') && s[a] <= '9') && s[a] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[a] - '0');
			a++;
		}
		else
		{
			num = num * 10 - (s[a] - '0');
			a++;
		}
	}

	flag = flag * -1;
	return (num * flag);
}
