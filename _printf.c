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
	int i = 0, j, count, specifier_count = 0;
	char c, next_c, *specifier = NULL;
	int (*op)(int, char *, va_list) = NULL;

	va_start(args, format);
	count = (format != NULL) ? 0 : -1;
	while (format != NULL && format[i] != '\0')
	{
		c = format[i];
		next_c = format[i + 1];
		if (c == '%' && next_c != '%' && _is_specifier(next_c))
		{
			specifier = malloc(sizeof(char) * 4 + 1);
			j = 0;
			while (format[++i] != '\0' && op == NULL && specifier != NULL)
			{
				specifier[j++] = format[i];
				op = get_print_function(specifier);
				if (op != NULL)
				{
					va_copy(args_copy, args);
					specifier[j++] = '\0';
					count += op(specifier_count++, specifier, args_copy);
					va_end(args_copy);
					free(specifier);
				}
			}
			op = NULL;
			continue;
		}
		i = (c == '%') ? i + 1 : i;
		c = (c == '%') ? next_c : c;
		count += _putchar(c);
		++i;
	}
	va_end(args);
	return (count);
}
