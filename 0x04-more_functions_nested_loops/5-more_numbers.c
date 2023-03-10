#include "main.h"

/**
 * more_numbers - prints 10 times the number
 *
 *
 * @i and @j : int checks for the number
 *
 * Return : 0
 **/
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; j <= 14; j++)

	{
	for (j = 0; j <= 14; j++)
	{

	if (j >= 10)
	_putchar('1');

	_putchar (j % 10 + '0');
	}
	      _putchar('\n');

	}
