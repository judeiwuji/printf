#include "main.h"

/**
 * print_string - prints a string
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_string(int n, char *format, va_list args)
{
	char *str = format;
	int count = 0;

	for (; n > 0; n--)
		va_arg(args, void *);

	str = va_arg(args, char *);
	if (has_precision(format))
		return (print_string_width(format, str));

	if (str == NULL)
		str = "(null)";

	count += right_align(format, _strlen(str));
	while (*str != '\0')
		count += _putchar(*str++);
	count += left_align(format, count);
	return (count);
}
