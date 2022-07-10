#include "main.h"

/**
 * _printf - a function that produces output according to
 * a format.
 * @format: The format to be used in printing
 * @...: Arguments list
 *
 * Return: (int) the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args, args_copy;
	int i = 0, j, count = 0, delimiter_count = 0;
	int is_special;
	char c, next_c, *delimiter = NULL;
	int (*op)(int, char *, va_list) = NULL;

	va_start(args, format);
	while (format[i] != '\0')
	{
		c = format[i];
		next_c = format[i + 1];
		if (c == '%' && (next_c != '%' && _is_alpha(next_c)))
		{
			delimiter = malloc(sizeof(char) * 3);
			j = 0;
			while (format[++i] != '\0' && op == NULL)
			{
				delimiter[j] = format[i];
				op = get_print_function(delimiter);
				if (op != NULL)
				{
					va_copy(args_copy, args);
					count += op(delimiter_count++, delimiter, args_copy);
					va_end(args_copy);
					free(delimiter);
				}
			}
			op = NULL;
			continue;
		}
		is_special = (c == '%' && (next_c == '%' || !_is_alpha(next_c)));
		c = is_special ? next_c : c;
		i = is_special ? i + 1 : i;
		count += _putchar(c);
		++i;
	}
	va_end(args);
	return (count);
}
