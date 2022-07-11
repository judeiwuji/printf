#include "main.h"

/**
 * print_custom_specifier - prints a string
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_custom_specifier(int n, char *format, va_list args)
{
	char *str = format, next_value;
	int count = 0;

	for (; n > 0; n--)
		va_arg(args, void *);

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		if (*str <= 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			str++;
			continue;
		}
		count += _putchar(*str++);
	}
	count += _putchar(*str++);
	count += left_align(format, count);
	return (count);
}