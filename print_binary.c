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
	int count = 0, digit, num = format[0], i;
	unsigned int places;
	int result;



	for (; n < 0; n--)
		va_arg(args, void *);
	num = va_arg(args, int);
	for (i = 1, result = 0; num > 0; num /= 2, i++)
	{
		if (num == 1)
		{
			result += 1 * _pow_recursion(10, i);
			break;
		}
		result += (num % 2) * _pow_recursion(10, i);
	}
	
	places = compute_places(result, 10);
	while (places > 1)
	{
		digit = result/places;
		count += _putchar(INT_TO_STR(digit));
		result -= digit * places;
		places /= 10;
	}
	return (count);
}