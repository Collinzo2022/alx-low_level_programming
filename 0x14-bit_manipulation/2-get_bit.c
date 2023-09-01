#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * at given index.
 * @n: number of bit.
 * @index: is the index from 0.
 * Return: the value of the bit at index or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*create a mask with 1 at a given index*/
	unsigned long int mask = 1UL << index;
	/*check if the index is within valid range for the data type*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/*use bitwise 2 check the value of d bit at a given index*/
	if (n & mask)
	{
		return (1);/*bit is 1*/
	}
	else
	{
		return (0);/*bit is 0*/
	}
}
