#include "main.h"

/**
 * print_string - prints a string
 * @n: The index of the arg in the list
 * @delimiter: The delimiter for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_string(int n, char *delimiter, va_list args)
{
	char *str = delimiter;
	int count = 0;

	for (; n > 0; n--)
		va_arg(args, void *);

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
		count += _putchar(*str++);

	return (count);
}
