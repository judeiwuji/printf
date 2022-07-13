#include "main.h"
#define COMPUTE_REMAINDER(val) (val < 10 ? (48 + val) : (87 + val))

/**
 * print_address - prints the address
 * @n: The index of the arg in the list
 * @format: The format for this arg
 * @args: The argument list
 *
 * Return: (int) The number of characters printed
 */
int print_address(int n __attribute__((unused)),
				  char *format __attribute__((unused)),
				  va_list args)
{
	int count = 0;
	long int num;
	char *str;
	for (; n < 0; n--)
		va_arg(args, void *);
	num = va_arg(args, long int);

	str = to_hex(num);
	count += _puts("0x");
	count += _puts(str);
	free(str);

	return (count);
}
