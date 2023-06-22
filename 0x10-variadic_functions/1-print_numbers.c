#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line.
 *
 * @n: number of integers to be printed.
 * @separator: is the string to be printed between numbers.
 *
 * Return: Nothing.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list aps;
	unsigned int i;

	va_start(aps, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(aps, int));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
		printf("\n");
	}
	va_end(aps);
}


