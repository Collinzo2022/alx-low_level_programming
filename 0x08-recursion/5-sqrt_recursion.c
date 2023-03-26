#include "main.h"
/**
 * number - prints the natural square root of a number.
 * @n: number for which natural square root should be found.
 * @root: squareroot number to be found.
 *
 * Return: natural square root n.
 * if is it not a natural square root is -1
 * if root less than 0 returns -1.
 **/
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);

	return (1 * number(n + 1, root));
}
/**
 * _squrt_recursion- returns the natural square root of a number.
 * @n: number for which natural square root of a number.
 *
 * Return: natural square root n.
 *if n does not have a natural square root, the function shold return -1.
 **/

int _sqrt_recursion(int n)
{	
	if (n < 0)
		return (-1);
	return (number(1, n));
	
}
