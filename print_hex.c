#include "main.h"

/**
 * print_hex - prints hexadecimal of an integer
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 * Return: (int) The number of characters printed
 */
int print_hex(int n, char *format, va_list args)
{
	int count = 0, i;
	unsigned long int num;
	char *str;

	for (; n > 0; n--)
		va_arg(args, void *);
	num = va_arg(args, unsigned long int);

	str = to_hex(num);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 'x')
		{
			str = _tolower(str);
			break;
		}
	}
	count += pad_zero(format, _strlen(str));
	count += right_align(format, _strlen(str));
	while (*str != '\0')
		count += _putchar(*str++);
	count += left_align(format, count);
	return (count);
}
