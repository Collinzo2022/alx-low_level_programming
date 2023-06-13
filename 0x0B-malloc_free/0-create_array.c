#include "main.h"
#include <stdlib.h>
/**
 * create_array - function creates an array an intiliazes
 * with a caharcter.
 *
 * @c: charcater
 * @size: size of array of char.
 *
 * Return: 0.
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptarray;

	if (size == 0)/**checks if the size is a positive integer*/
	{
		return (NULL);
	}

	ptarray = (char *)malloc(size * sizeof(char));

	if (ptarray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptarray[i] = c;
	}

	return (ptarray);
}

