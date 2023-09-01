#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * at a given index.
 * @n: pointer to the number to set the bit.
 * @index: index starts from 0.
 *
 * Return: 1 for success or 0 for error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*create a mask wit the bit set to 1*/
	unsigned long int mask = 1UL << index;

	/*checks if the index is out of range*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/*set the bit at the given index to 1*/
	*n |= mask;

	return (1);
}


