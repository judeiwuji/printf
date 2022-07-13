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
	int num = format[0], count = 0, is_int_min = 0;
	int negative = 0;

	for (; n > 0; n--)
		va_arg(args, void *);
	num = va_arg(args, int);
	if (has_precision(format))
		return (print_integer_width(format, num));
	if (num < 0)
	{
		num *= -1;
		is_int_min = num < 0 ? 1 : 0;
		num = is_int_min ? (num + 1) * -1 : num;
		negative = 1;
	}

	count += right_align(format, count_int(num) + negative);
	if (negative)
		count += _putchar('-');
	count += pad_zero(format, count_int(num) + negative);
	count += print_digit(num, is_int_min);
	count += left_align(format, count);
	return (count);
}

/**
 * print_digit - Prints a given number
 * @n: the number
 *
 * Return: (int)
 */
int print_digit(int n, int is_int_min)
{
	int digit, count = 0;
	unsigned int places;

	places = compute_places(n, 10);
	while (places > 1)
	{
		digit = n / places;
		count += _putchar(digit + '0');
		n = n - (digit * places);
		places /= 10;
	}
	digit = (n % 10) + is_int_min;
	count += _putchar(digit + '0');

	return (count);
}
