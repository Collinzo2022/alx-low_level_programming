#include "main.h"
/**
 * _islower - check if a char is lowercase
 * @c: is the char to be checked if its lowercase or not
 * Return: 1 if character is lowercase, otherwise 0.
 *
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
