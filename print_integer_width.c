#include "main.h"

/**
 * print_integer_width - prints an integer with specified width
 * @format: The format for this arg
 * @n: The number to be printed
 *
 * Return: (int) The number of characters printed
 */
int print_integer_width(char *format, int n)
{
	int count = 0, min, max, i, len = 0, places;
	int digit, is_int_min = 0;

	min = get_min_width(format);
	max = get_max_width(format);
	if (n < 0)
	{
		n *= -1;
		is_int_min = n < 0 ? 1 : 0;
		n = is_int_min ? (n + 1) * -1 : n;
		count += _putchar('-');
		++len;
	}
	len = count_int(n);
	while (count < (min - max))
		count += _putchar(' ');
	for (i = len; i < max; i++)
		count += _putchar('0');

	i = 0;
	places = compute_places(n, 10);
	while (places > 1 && i < max)
	{
		digit = n / places;
		count += _putchar(digit + '0');
		n = n - (digit * places);
		places /= 10;
		i++;
	}
	if (i < max)
	{
		digit = (n % 10) + is_int_min;
		count += _putchar(digit + '0');
	}
	while (count < min)
		count += _putchar('0');
	return (count);
}
