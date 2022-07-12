#include "main.h"

/**
 * get_print_function - Gets the function to perform the printing
 * @format: The format of the printer
 *
 * Return: A callback function to perform the print
 * operation
 */
int (*get_print_function(char *format))(int, char *, va_list)
{
	op_t ops[] = {
			{'c', print_char},
			{'s', print_string},
			{'d', print_int},
			{'i', print_int},
			{'r', print_reverse},
			{'R', print_rot13},
			{'b', print_binary},
			{'S', print_custom_specifier},
			{'x', print_hex},
			{'X', print_hex},
			{'o', print_octal},
			{'u', print_unsigned_int},
			{'p', print_address},
			{'\0', NULL},
	};
	int (*op)(int, char *, va_list) = NULL;
	int i, j;

	for (i = 0; ops[i].c != '\0'; i++)
	{
		for (j = 0; format[j] != '\0'; j++)
		{
			if (ops[i].c == format[j])
			{
				op = ops[i].op;
				break;
			}
		}
		if (op != NULL)
			break;
	}

	return (op);
}
