#include "main.h"

/**
 * _tolower - transforms upper case string to
 * lower case
 * @str: The string
 *
 * Return: transformed string
 */
char *_tolower(char *str)
{
	char *lower = _realloc(NULL, 0, _strlen(str));
	char c;
	int i;

	lower = _strcpy(lower, str);
	for (i = 0; lower[i] != '\0'; i++)
	{
		c = lower[i];
		if (c >= 65 && c <= 90)
			lower[i] = c + 32;
	}

	return (lower);
}
