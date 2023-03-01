#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integer followed by new line.
 * _putchar - print newline
 * @n: integer
 * @a: array
 *
 * Return: Nothing on success
 **/
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
			printf(", ");

		count++;
	}
	_putchar('\n');

}
