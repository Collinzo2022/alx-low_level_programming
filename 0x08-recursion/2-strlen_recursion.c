#include <stdio.h>
/**
 * _strlen_recursion - prints the length of a string.
 * @s: string.
 *
 * Return: Nothing on success.
 **/
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);

}
