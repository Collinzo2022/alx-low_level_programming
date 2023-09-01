#include "main.h"
/**
 * print_binary - function that prints the
 * binary representation of a number.
 * @n: number to be converted.
 */
void print_binary(unsigned long int n)
{
	unsigned long int present;
	int start = 63;
	int num = 0;

	while (start >= 0)
	{
		present = n >> start;
		if (present & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');

		start--;
	}

	if (!num)
		_putchar('0');
}
