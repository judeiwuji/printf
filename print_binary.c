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
	int count = 0, digit, num = format[0];
	unsigned int places;

	for (; n < 0; n--)
		va_arg(args, void *);
	num  = va_arg(args, int);
	
}