#include "main.h"

/**
 * pad_zero - prints zero instead of spaces
 * @format: The format
 * @n: Number of printed characters
 *
 * Return: (int)
 */
int pad_zero(char *format, int n)
{
	int i, count = 0;
	int align = _atoi(format);

	if (format[0] == '0')
	{
		n = align - n;
		for (i = 0; i < n; i++)
			count += _putchar('0');
	}
	return (count);
}
