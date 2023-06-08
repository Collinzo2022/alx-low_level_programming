#include "main.h"
/**
 * check_squareroot - checks for the squareroot
 * @i: integer
 * @t: integer.
 *
 * Return: squareroot
 **/
int check_squareroot(int i, int t)
{
	int root = i * i;

	if (root == t)
		return (i);
	else if (root > t)
		return (-1);
	return (check_squareroot(i + 1, t));
}
/**
 * _sqrt_recursion - returns the natural
 * quareroot of a integer.
 * @n: integer to find squareroot
 *
 * Return: natural squareroot.
 **/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check_squareroot(1, n));
}
