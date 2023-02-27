#include "main.h"

/**
 * _strlen - function prints the length of a string
 * @s: the string
 *
 * Return:0.
 **/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')

	length++;

	return (length);


}
