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
	int count = 0, i;
	long unsigned int quotient, remainder, decimal_num;
	char *str = NULL;

	for (; n < 0; n--)
		va_arg(args, void *);
	decimal_num = va_arg(args, long unsigned int);

	str = _realloc(str, 0, 2);
	if (str != NULL)
	{
		for (quotient = decimal_num, i = 0;
			 quotient > 0 && decimal_num > 0;
			 quotient /= 16)
		{
			remainder = quotient % 16;
			str[i++] = COMPUTE_REMAINDER(remainder);
			str[i] = '\0';
			str = _realloc(str, _strlen(str), _strlen(str) + 2);
		}
		count += _puts("0x");
		count += _puts(_reverse_string(str));
		free(str);
	}
	return (count);
}
