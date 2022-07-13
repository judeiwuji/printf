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
	int i = 0, j, count, spec_count = 0;
	char c, next_c, *spec = NULL;
	int (*op)(int, char *, va_list) = NULL;

	va_start(args, format);
	count = (format != NULL) ? 0 : -1;
	while (format != NULL && format[i] != '\0')
	{
		c = format[i];
		next_c = format[i + 1];
		if (c == '%' && _is_specifier(next_c) == 1)
		{
			spec = _realloc(NULL, 0, 2);
			j = 0;
			while (format[++i] != '\0' && op == NULL && spec != NULL)
			{
				spec[j++] = format[i];
				spec[j] = '\0';
				op = get_print_function(spec);
				if (op != NULL)
				{
					va_copy(args_copy, args);
					count += op(spec_count++, spec, args_copy);
				}
				spec = _realloc(spec, _strlen(spec), _strlen(spec) + 2);
			}
			op = NULL;
			free(spec);
			continue;
		}
		i = (c == '%' && next_c == '%') ? i + 1 : i;
		c = (c == '%' && next_c == '%') ? next_c : c;
		count += _putchar(c);
		++i;
	}
	va_end(args);
	return (count);
}
