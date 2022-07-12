#include "main.h"

/**
 * has_precision - Checks if a string has a dot (.)
 * @str: the string
 *
 * Return: (int)
 */
int has_precision(char *str)
{
	int i, precision = 0;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == '.')
			{
				precision = 1;
				break;
			}
		}
	}
	return (precision);
}
