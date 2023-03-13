#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check for uppercase
 *
 * Return: 1 for uppercase or 0 otherwise
 *
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
