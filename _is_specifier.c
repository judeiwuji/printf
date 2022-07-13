#include "main.h"

/**
 * _is_specifier - Checks if a character is a specifier
 * @c: The character to be checked
 *
 * Return: (int)
 */
int _is_specifier(char c)
{
	char *specifiers = "csdbiSrRxpXou-*";
	int res = 0, i;

	for (i = 0; specifiers[i] != '\0'; i++)
	{
		if (c == specifiers[i] || _is_digit(c) == 1)
		{
			res = 1;
			break;
		}
	}
	return (res);
}
