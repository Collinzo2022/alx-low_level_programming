#include "main.h"
/**
 * _strlen_recursion - function prints the length of a string
 *
 * @s: string.
 *
 * Return: length of a string.
 **/
int _strlen_recursion(char *s)
{
	 /** length of a string*/

	if (*s == '\0')/** string pointer is not at the end*/
	{

		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
