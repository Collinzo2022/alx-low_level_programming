#include "main.h"

/**
 * print_most_numbers - prints the number from 0 to 9
 * except 2 and 4
 *
 * @c - check if the number is from 0 t0 9
 *
 * Return : 0
 *
 **/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))

	_putchar(c);
	}
	_putchar('\n');
}
