#include "main.h"
/**
 * swap_int - the function swaps the value of two
 * integers..
 *
 * @a: first integer
 * @b: second integer
 * Return: Nothing on success.
 **/
void swap_int(int *a, int *b)
{

	int c;

	c = *a;
	*a = *b;
	*b = c;

}
