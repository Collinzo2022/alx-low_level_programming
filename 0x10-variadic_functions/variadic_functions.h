#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_all_char(va_list  list);
void print_all_int(va_list  list);
void print_all_float(va_list list);
void print_all_string(va_list list);

typedef struct print_function
{
	char *symbol;
	void (*print)(va_list  list);
} prints;


#endif
