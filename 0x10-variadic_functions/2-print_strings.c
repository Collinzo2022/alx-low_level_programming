#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints string followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: number of strings to be printed.
 *
 * Return: Nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list aps;
	unsigned int i;
	char *s;

	va_start(aps, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(aps, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(aps);
}

