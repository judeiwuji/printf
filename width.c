#include "main.h"

/**
 * get_min_width - Gets the min width to be printed
 * @format: the format specifier
 *
 * Return: (int)
 */
int get_min_width(char *format)
{
	return (_atoi(format));
}

/**
 * get_max_width - Gets the max width to be printed
 * @format: the format specifier
 *
 * Return: (int)
 */
int get_max_width(char *format)
{
	char *str = _realloc(NULL, 0, 2);
	int start = 0, i, j, min = 0;

	for (i = 0, j = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '.')
		{
			start = 1;
			continue;
		}

		if (start == 1)
		{
			str[j++] = format[i];
			str[j] = '\0';
			str = _realloc(str, _strlen(str), _strlen(str) + 2);
		}
	}
	if (str != NULL)
	{
		min = _atoi(str);
		free(str);
	}

	return (min);
}
