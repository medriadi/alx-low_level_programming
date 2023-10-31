#include <stdlib.h>
#include "main.h"

void mywstr(char **words, char *str);
void cmyword(char **words, char *str, int start, int end, int index);

/**
 * strtow - A function that splits a string into words.
 * @str: The string to be split.
 * Return: A pointer to the array of split words.
 */
char **strtow(char *str)
{
	int i, wxwrflag, wlen;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}

	i = wxwrflag = wlen = 0;

	while (str[i])
	{
		if (wxwrflag == 0 && str[i] != ' ')
			wxwrflag = 1;

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			wxwrflag = 0;
			wlen++;
		}

		i++;
	}

	wlen += wxwrflag == 1 ? 1 : 0;

	if (wlen == 0)
	{
		return (NULL);
	}

	words = (char **)malloc(sizeof(char *) * (wlen + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	mywstr(words, str);
	words[wlen] = NULL;
	return (words);
}

/**
 * mywstr - A function that converts words into strings.
 * @words: The array to store the split words.
 * @str: The input string to be split.
 * Return: Nothing.
 */
void mywstr(char **words, char *str)
{
	int i, j, wstart, wrflag;

	i = j = wrflag = 0;

	while (str[i])
	{
		if (wrflag == 0 && str[i] != ' ')
		{
			wstart = i;
			wrflag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			cmyword(words, str, wstart, i, j);
			j++;
			wrflag = 0;
		}

		i++;
	}

	if (wrflag == 1)
	{
		cmyword(words, str, wstart, i, j);
	}
}

/**
 * cmyword - A function that creates a word from a string.
 * @words: The array to store the split words.
 * @str: The input string.
 * @start: The start position of the word.
 * @end: The end position of the word.
 * @index: The index where the new word should be inserted.
 * Return: Nothing.
 */
void cmyword(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
	{
		words[index][j] = str[start];
	}

	words[index][j] = '\0';
}
