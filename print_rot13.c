#include "main.h"

/**
 * print_rot13 - prints a string as rot13 encoded
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_rot13(int n, char *format, va_list args)
{
	char *str = format;
	int count = 0, i;

	for (; n > 0; n--)
		va_arg(args, void *);
	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	str = rot13(str);
	for (i = 0; str[i] != '\0'; i++)
		count += _putchar(str[i]);

	free(str);
	return (count);
}
