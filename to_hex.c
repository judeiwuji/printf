#include "main.h"

/**
 * get_hex_code - Get the hex code of a number
 * @n: The number
 *
 * Return: The hex code or the number
 */
char get_hex_code(int n)
{
	char c = INT_TO_STR(n);
	int j;

	hex_code_t hex_codes[] = {
		{'A', 10},
		{'B', 11},
		{'C', 12},
		{'D', 13},
		{'E', 14},
		{'F', 15},
		{'\0', 0},
	};

	for (j = 0; hex_codes[j].c != '\0'; j++)
	{
		if (hex_codes[j].code == n)
		{
			c = hex_codes[j].c;
			break;
		}
	}

	return (c);
}

/**
 * to_hex - convert a decimal to hexadecimal
 * @n: The number to be converted
 *
 * Return: (pointer)
 */
char *to_hex(long unsigned int n)
{
	char *str;
	int i = 0, digit;

	str = _realloc(NULL, 0, 2);
	if (n > 0)
	{
		while (n > 0)
		{
			digit = n % 16;
			str[i++] = get_hex_code(digit);
			str[i] = '\0';
			n /= 16;
			str = _realloc(str, _strlen(str), _strlen(str) + 2);
		}
		str = _reverse_string(str);
	}
	else
	{
		str[i++] = '0';
		str[i] = '\0';
	}
	return (str);
}
