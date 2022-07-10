#include "main.h"

/**
 * print_char - prints a character
 * @n: The index of the arg in the list
 * @delimiter: The delimiter for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_char(int n, char *delimiter, va_list args)
{
	char c = delimiter[0];

	for (; n > 0; n--)
		va_arg(args, void *);
	c = va_arg(args, int);

	return (_putchar(c));
}
