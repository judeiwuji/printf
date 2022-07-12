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
	char *str = format, *hex;
	int count = 0;

	for (; n > 0; n--)
		va_arg(args, void *);
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			hex = to_hex(*str);
			count += _putchar('x');
			if (_strlen(hex) < 2)
				count += _putchar('0');
			count += _puts(hex);
			str++;
			continue;
		}
		count += _putchar(*str++);
	}
	return (count);
}
