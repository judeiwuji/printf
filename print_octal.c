#include "main.h"

/**
 * print_octal - prints octal of an integer
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 * Return: (int) The number of characters printed
 */
int print_octal(int n, char *format, va_list args)
{
	int count = 0;
	unsigned int num;
	char *str;

	for (; n > 0; n--)
		va_arg(args, void *);
	num = va_arg(args, unsigned int);

	str = to_octal(num);
	count += pad_zero(format, _strlen(str));
	count += right_align(format, _strlen(str));
	while (*str != '\0')
		count += _putchar(*str++);
	count += left_align(format, count);
	return (count);
}
