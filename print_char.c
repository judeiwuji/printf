#include "main.h"

/**
 * print_char - prints a character
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_char(int n, char *format, va_list args)
{
	char c = format[0];

	for (; n > 0; n--)
		va_arg(args, void *);
	c = va_arg(args, int);

	return (_putchar(c));
}
