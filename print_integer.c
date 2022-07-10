#include "main.h"

/**
 * print_int - prints an integer
 * @n: The index of the arg in the list
 * @delimiter: The delimiter for this arg
 * @args: The argument list
 * Return: (int) The number of characters printed
 */
int print_int(int n, char *delimiter, va_list args)
{
	int num = delimiter[0];
	int count = 0, digit;
	unsigned int places;

	for (; n > 0; n--)
		va_arg(args, void *);
	num = va_arg(args, int);

	places = compute_places(num, 10);
	while (places > 1)
	{
		digit = num / places;
		count += _putchar(digit + '0');
		num = num - (digit * places);
		places /= 10;
	}
	count += _putchar(num % places + '0');
	return (count);
}
