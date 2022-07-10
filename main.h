#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct ops - Struct ops
 * @c: The character associated to this op
 * @op: A callback function to perform the print
 * operation.
 */
typedef struct ops
{
    char c;
    int (*op)(int, char *, va_list);
} op_t;
int _printf(const char *format, ...);
int (*get_print_function(char *format))(int, char *, va_list);
int _putchar(char c);
int print_char(int n, char *delimiter, va_list args);
int print_string(int n, char *delimiter, va_list args);
int print_int(int n, char *delimiter, va_list args);
int print_float(int n, char *delimiter, va_list args);
int print_binary(int n, char *delimiter, va_list args);
int print_hex(int n, char *delimiter, va_list args);
#endif
