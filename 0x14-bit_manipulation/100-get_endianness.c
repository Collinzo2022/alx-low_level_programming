#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * of the system.
 * Return: 0 if big endain or 1 if little endain.
 */
int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *byte_ptr = (unsigned char *)&value;


	return (*byte_ptr == 1) ? 1 : 0;
}
