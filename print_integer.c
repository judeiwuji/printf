#include "main.h"

/**
 * print_int - prints an integer
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 * Return: (int) The number of characters printed
 */
int print_int(int n, char *format, va_list args)
{
	int num = format[0];
	int count = 0, digit;
	unsigned int places;

	for (; n > 0; n--)
		va_arg(args, void *);
	num = va_arg(args, int);

	if (num < 0)
	{
		num *= -1;
		count += _putchar('-');
	}
	places = compute_places(num, 10);
	while (places > 1)
	{
		digit = num / places;
		count += _putchar(digit + '0');
		num = num - (digit * places);
		places /= 10;
	}
	count += _putchar(num % 10 + '0');
	return (count);
}
