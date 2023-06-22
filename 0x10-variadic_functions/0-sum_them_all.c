#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - prints the sum of all
 * the parameters.
 *
 * @n: number of parameters.
 *
 * Return: Sum of parameters or 0 if n is 0.
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list number_args;
	int sum = 0;
	unsigned int i;

	va_start(number_args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(number_args, int);
	}

	va_end(number_args);

	return (sum);
}
