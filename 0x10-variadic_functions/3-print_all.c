#include "variadic_functions.h"

/**
 * print_all_char - prints all char.
 * @va_list: used to intialize the argument
 * @list: variadic argument.
 *
 * Returns: Nothing.
 **/
void print_all_char(va_list  list)
{
	char c;

	c = va_arg(list, int);

	printf("%c", c);
}
/**
 * print_all_int - prints all integer.
 * @va_list: used to intialize the argument.
 * @list: list of argument.
 *
 * Returns: Nothing.
 **/
void print_all_int(va_list  list)
{
	int n;

	n = va_arg(list, int);

	printf("%i", n);
}
/**
 * print_all_float - prints all float.
 * @va_list: used to intialize the argument.
 * @list: list of argument.
 *
 * eturns: Nothing.
 **/
void print_all_float(va_list  list)
{
	float n;

	n = va_arg(list, double);

	printf("%f", n);
}
/**
 * print_all_string - prints all string.
 *
 *@va_list: used to intialize th list var.
 *@list: list of argument.
 *
 **/
void print_all_string(va_list  list)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints anything.
 * @format: format of input.
 *
 * Returns: Nothing.
 **/
void print_all(const char *format, ...)
{
	va_list list;
	char *separator;

	int i = 0, j = 0;


	prints functions[] =

	{

		{"c", print_all_char},
		{"i", print_all_int},
		{"f", print_all_float},
		{"s", print_all_string},
	};

	va_start(list, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*format + i) != *(functions[j].symbol))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].print(list);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(list);
}

