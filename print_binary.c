#include "main.h"

/**
 * print_binary - prints the binary
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_binary(int n, char *format, va_list args)
{
	int count = 0, i, num = format[0];
	char *str = NULL;

	for (; n < 0; n--)
		va_arg(args, void *);
	num = va_arg(args, int);

	str = _realloc(str, 0, 2);
	i = 0;
	while (num > 0)
	{
		str[i++] = INT_TO_STR(num % 2);
		str[i] = '\0';
		num /= 2;
		_realloc(str, _strlen(str), _strlen(str) + 2);
	}

	str = _reverse_string(str);
	while (*str != '\0')
		count += _putchar(*str++);
	return (count);
}
