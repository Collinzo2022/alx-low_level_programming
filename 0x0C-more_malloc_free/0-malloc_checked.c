#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 *@b: nuber of bytes to allocates.
 * Return: a pointer to the allocated memory and if it fails 98.
 **/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{

		exit(98);
	}
	return (p);
}
