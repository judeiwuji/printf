#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define STR_TO_INT(val) (val - 48)
#define INT_TO_STR(val) (val + 48)
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
int print_char(int n, char *format, va_list args);
int print_string(int n, char *format, va_list args);
int print_int(int n, char *format, va_list args);
int print_float(int n, char *format, va_list args);
int print_binary(int n, char *format, va_list args);
int print_hex(int n, char *format, va_list args);
int print_octal(int n, char *format, va_list args);
int print_unsigned_int(int n, char *format, va_list args);
int print_address(int n, char *format, va_list args);
int _is_alpha(char c);
int _is_specifier(char c);
unsigned int compute_places(unsigned int n, int step);
int _strlen(char *s);
char *rot13(char *str);
char *_reverse_string(char *str);
int print_reverse(int n, char *format, va_list args);
int print_rot13(int n, char *format, va_list args);
int print_custom_specifier(int n, char *format, va_list args);
int _is_digit(char c);
int _atoi(char *s);
int _pow_recursion(int x, int y);
int left_align(char *format, int n);
int right_align(char *format, int n);
int pad_zero(char *format, int n);
int count_int(int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_strcpy(char *dest, char *src);
int get_max_width(char *format);
int get_min_width(char *format);
int has_precision(char *str);
int print_string_width(char *format, char *str);
int print_integer_width(char *format, int n);
char *to_octal(unsigned int n);
char *to_hex(long unsigned int n);
char *_tolower(char *str);
char get_hex_code(int n);
int _indexof(char *str, char c);
int print_digit(int n, int is_int_min);
/**
 * struct hex_code - Struct hex_code
 * @c: The character associated to this code
 * @code: The digit for this char
 * operation.
 */
typedef struct hex_code
{
	char c;
	int code;
} hex_code_t;
int _puts(char *str);
#endif
