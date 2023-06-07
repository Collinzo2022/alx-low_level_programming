#include "main.h"
/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: string
 *
 * Return: Nothing
 **/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')/* if the string pointer is not equal to last character */
	{
		_print_rev_recursion(s + 1);/*move to the next character*/
		_putchar(*s);/*print the character the string pointer is pointing to */
	}
	else
		_putchar('\n');/*print a new line*/


}
