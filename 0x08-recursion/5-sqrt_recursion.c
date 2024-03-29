#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 * @n: number.
 *
 * Return: squareroot.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_check_sqrt(0, n));
}
/**
 * _check_sqrt - returns the square root of a number.
 * @n: number to be check
 * @x: squared numer.
 *
 * Return: the square root of n.
 */
int _check_sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_check_sqrt(n + 1, x));
}
