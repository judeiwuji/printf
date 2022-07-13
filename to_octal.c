#include "main.h"

/**
 * to_octal - convert an integer to octal
 * @n: The number to be converted
 *
 * Return: (pointer)
 */
char *to_octal(unsigned int n)
{
	char *str;
	int i = 0;

	str = _realloc(NULL, 0, 2);
	while (n > 7)
	{
		str[i++] = INT_TO_STR(n % 8);
		str[i] = '\0';
		n /= 8;
		str = _realloc(str, _strlen(str), _strlen(str) + 2);
	}
	str[i++] = INT_TO_STR(n);
	str[i] = '\0';
	str = _reverse_string(str);

	return (str);
}
