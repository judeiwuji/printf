#include "main.h"

/**
 * right_align - align to right
 * @format: The format
 * @n: The already printed characters
 *
 * Return: (int)
 */
int right_align(char *format, int n)
{
	int i, count = 0;
	int align = _atoi(format);

	if (format[0] != '0' && align > 0)
	{
		n = align - n;
		for (i = 0; i < n; i++)
			count += _putchar(' ');
	}
	return (count);
}
