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
	int count = 0, i;
	char *str = NULL;
	unsigned int num;

	format = format;
	for (; n > 0; n--)
		va_arg(args, void *);
	num = va_arg(args, unsigned int);

	if (num != 0)
	{
		str = _realloc(str, 0, 2);
		if (str != NULL)
		{
			i = 0;
			while (num > 0 && str != NULL)
			{
				str[i++] = INT_TO_STR(num % 2);
				str[i] = '\0';
				num /= 2;
				str = _realloc(str, _strlen(str), _strlen(str) + 2);
			}
			str = _reverse_string(str);
			count += _puts(str);

			free(str);
		}
		else
			count = -1;
	}
	else
		count += _puts("0");
	return (count);
}
