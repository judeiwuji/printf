#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @n: The index of the arg in the list
 * @delimiter: The delimiter for this arg
 * @args: The argument list
 * Return: (int) The number of characters printed
 */
int print_char(int n, char *delimiter, va_list args)
{
    char c = delimiter[0];

    for (; n > 0; n++)
        va_arg(args, void *);
    c = va_arg(args, int);
    return (_putchar(c));
}

/**
 * print_string - prints a string
 * @n: The index of the arg in the list
 * @delimiter: The delimiter for this arg
 * @args: The argument list
 * Return: (int) The number of characters printed
 */
int print_string(int n, char *delimiter, va_list args)
{
    char *str = delimiter;
    int count = 0;

    for (; n > 0; n++)
        va_arg(args, void *);

    str = va_arg(args, char *);

    if (str == NULL)
        str = "(null)";

    while (*str != '\0')
        count += _putchar(*str++);

    return (count);
}
