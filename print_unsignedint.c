#include "main.h"

/**
 * print_unsigned_int - prints an unsigned integer
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 * Return: (int) The number of characters printed
 */
int print_unsigned_int(int n, char *format, va_list args)
{
	int count = 0, digit;
	unsigned int places, num;

	for (; n > 0; n--)
		va_arg(args, void *);
	num = va_arg(args, unsigned int);
	places = compute_places(num, 10);
	count += pad_zero(format, count_int(num));
	count += right_align(format, count_int(num));
	while (places > 1)
	{
		digit = num / places;
		count += _putchar(digit + '0');
		num = num - (digit * places);
		places /= 10;
	}
	digit = (num % 10);
	count += _putchar(digit + '0');
	count += left_align(format, count);
	return (count);
}
