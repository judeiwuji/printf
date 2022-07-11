#include "main.h"

/**
 * left_align - align to left
 * @format: The format
 * @n: The already printed characters
 *
 * Return: (int)
 */
int left_align(char *format, int n)
{
	int i, count = 0;
	int align = _atoi(format);

	if (align < 0)
	{
		align *= -1;
		n = align - n;

		for (i = 0; i < n; i++)
			count += _putchar(' ');
	}
	return (count);
}
