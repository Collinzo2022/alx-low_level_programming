#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 
 * 0 at a given index.
 * @n: pointer to value to be set to bit 0.
 * @index: index starting from 0.
 * Return: 1 on success or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	/*checks if the index is valid within the bit range of the data type*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/*set the bit at the given index to 0*/
	*n &= ~(1UL << index);

	return (1);
}
