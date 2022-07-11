#include "main.h"

/**
 * print_reverse - prints a string in reverse.
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_reverse(int n, char *format, va_list args)
{
	char *str = format;
	int count = 0;

	for (; n > 0; n--)
		va_arg(args, void *);

	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	str = _reverse_string(str);
	while (*str != '\0')
		count += _putchar(*str++);

	return (count);
}
