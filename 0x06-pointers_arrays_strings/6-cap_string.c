#include "main.h"

/**
 * cap_string - Capitalize the first letter of each word in a string.
 *
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string 'str'.
 */
char *cap_string(char *str)
{
	int x, y;
	int flag;
	char sig[] = ",;.!?(){}\n\t\" ";

	for (x = 0, flag = 0; str[x] != '\0'; x++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			flag = 1;
		for (y = 0; sig[y] != '\0'; y++)
		{
			if (sig[y] == str[x])
				flag = 1;
		}

		if (flag)
		{
			if (str[x] >= 'a' && str[x] <= 'z')
			{
				str[x] -= 32;
				flag = 0;
			}
			else if (str[x] >= 'A' && str[x] <= 'Z')
				flag = 0;
			else if (str[x] >= '0' && str[x] <= '9')
				flag = 0;
		}
	}
	return (str);
}
