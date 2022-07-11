#include "main.h"

/**
 * print_reverse - prints a string in reverse.
 * @s: The string to be printed
 *
 * Return: void
 */
int print_reverse(int n, char *format, va_list args)
{
	char *str = format;
	int count = 0;

	for (; n > 0; n--)
		va_arg(args, void *);

	str = va_arg(args, char *);

	if (str == NULL)
		str = "";
	else
		str = _reverse_string(str);

	while (*str != '\0')
		count += _putchar(*str++);

	return (count);
}
