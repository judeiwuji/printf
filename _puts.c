#include "main.h"

/**
 * _puts - print as string
 * @str: The string;
 *
 * Return: (int)
 */
int _puts(char *str)
{
	int i, count;

	for (i = 0, count = 0; str != NULL && str[i] != '\0'; i++)
		count += _putchar(str[i]);

	return (count);
}
