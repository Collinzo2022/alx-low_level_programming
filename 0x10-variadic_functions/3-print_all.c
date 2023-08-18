#include "variadic_functions.h"
/**
 * print_char - prints a char.
 * @arg: list of arguments pointing to
 * character.
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - prints an int.
 * @arg: list of arguments pointing
 * to integer.
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);

	printf("%d", num);
}
/**
 * print_float - prints a float.
 * @arg: list of arguments pointing
 * to float.
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);

	printf("%f", num);
}
/**
 * print_string - prints a string.
 * @arg: list of arguments pointing
 * to string.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - function that prints anything.
 *
 * @format: a list of types of arguments
 * passed.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list arg;

	int i = 0;
	int j = 0;
	char *separator = " ";

	printer functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(arg, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
				functions[j].print(arg);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(arg);



}
