#include "main.h"

/**
 * print_string_width - prints a string with specified width
 * @format: The format for this arg
 * @str: The string to be printed
 *
 * Return: (int) The number of characters printed
 */
int print_string_width(char *format, char *str)
{
	int count = 0, min, max, i, len;

	if (str == NULL)
		str = "(null)";

	min = get_min_width(format);
	max = get_max_width(format);
	len = _strlen(str);
	len = len > max ? max : len;
	while (count < (min - len))
		count += _putchar(' ');
	i = 0;
	while (*str != '\0' && i < max)
	{
		count += _putchar(*str++);
		i++;
	}
	while (count < min)
		count += _putchar(' ');

	return (count);
}
