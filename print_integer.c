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
	int num = format[0], count = 0, digit, is_int_min = 0;
	unsigned int places;

	for (; n > 0; n--)
		va_arg(args, void *);
	num = va_arg(args, int);

	if (num < 0)
	{
		num *= -1;
		is_int_min = num < 0 ? 1 : 0;
		num = is_int_min ? (num + 1) * -1 : num;
		count += _putchar('-');
	}
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
	digit = (num % 10) + is_int_min;
	count += _putchar(digit + '0');
	count += left_align(format, count);
	return (count);
}
