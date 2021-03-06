#include "main.h"

/**
 * _reverse_string - Reverses a string
 * @str: The string to be reversed
 *
 * Return: (pointer)
 */
char *_reverse_string(char *str)
{
	int len, i, j;
	char *reverse;

	len = _strlen(str);
	reverse = malloc(sizeof(char) * len + 1);

	if (len == 0)
	{
		reverse[0] = '\0';
		return (reverse);
	}

	if (reverse != NULL)
	{
		for (i = len - 1, j = 0; i >= 0; i--, j++)
			reverse[j] = str[i];
		if (reverse)
			reverse[j] = '\0';
	}

	return (reverse);
}
