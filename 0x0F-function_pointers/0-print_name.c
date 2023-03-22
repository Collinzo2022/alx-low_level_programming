#include "function_pointers.h"

/**
 * print_name - prints out a name.
 * @name: name of a person.
 * @f: function names.
 *
 * Return: void.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);


}
