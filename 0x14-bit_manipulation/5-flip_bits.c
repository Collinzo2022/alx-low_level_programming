#include "main.h"
/**
 * flip_bits - function that returns the number of
 * bits you would need to flip from one number to another.
 *
 * @n: first number.
 * @m: second number.
 * Return: the number of bits that flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count = 0;

	while (xor_res)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}

	return (count);
}
