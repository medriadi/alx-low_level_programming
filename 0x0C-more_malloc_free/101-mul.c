#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_positive_number - Checks if a string is a positive number.
* @str: The string to check.
* Return: 1 if it's a positive number, 0 otherwise.
*/
int is_positive_number(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}

	return (1);
}

/**
* multiply_strings - Multiplies two positive numbers represented as strings.
* @num1: The first number as a string.
* @num2: The second number as a string.
* Return: A dynamically allocated string representing the result.
*/
char *multiply_strings(const char *num1, const char *num2)
{
	int len1 = strlen(num1);

	int len2 = strlen(num2);

	int len_result = len1 + len2;

	int *result = calloc(len_result, sizeof(int));

	for (int i = len1 - 1; i >= 0; i--)

	{
		for (int j = len2 - 1; j >= 0; j--)

		{
			int mul = (num1[i] - '0') * (num2[j] - '0');

			int sum = mul + result[i + j + 1];

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	int start = 0;

	while (start < len_result - 1 && result[start] == 0)
		start++;

	char *result_str = malloc(len_result - start + 1);

	for (int i = 0; i < len_result - start; i++)

		result_str[i] = result[i + start] + '0';
	result_str[len_result - start] = '\0';

	free(result);

	return (result_str);
}

/**
 * main - Entry point of the program to multiply two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success, 98 on incorrect arguments or non-positive numbers.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	char *result = multiply_strings(argv[1], argv[2]);

	printf("%s\n", result);
	free(result);

	return (0);
}
