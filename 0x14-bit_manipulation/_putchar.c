#include "main.h"
/**
 * _putchar - function prints a char.
 * @c: char to be printed.
 * Return: 1 0n success and -1 if it fails.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
