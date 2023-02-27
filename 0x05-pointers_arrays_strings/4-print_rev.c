#include "main.h"

/**
 * print_rev - function prints a string in reverse
 * @s: string
 *
 * Return: Nothing.
 **/
void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (str[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(str[a]);
	}
	_putchar('\n');


}
