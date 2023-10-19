#include "main.h"

/**
 * rot13 - Encode a string using the ROT13 algorithm.
 *
 * @s: The string to be encoded using ROT13.
 *
 * Return: A pointer to the modified string 's'.
 */
char *rot13(char *s)
{
	int x, y;

	char sera[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char serb[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; sera[y] != '\0'; y++)
		{
			if (s[x] == sera[y])
			{
				s[x] = serb[y];
				break;
			}
		}
	}
	return (s);
}
