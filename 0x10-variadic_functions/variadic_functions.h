#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stdio.h>
/**
 * typedef struct print_func - a struct of
 * symbol and function.
 * @symbol: a member of symbol.
 * @print: a member that is function pointer.
 */
typedef struct print_func
{
	char *symbol;
	void (*print)(va_list arg);
} printer;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
#endif
