#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initiliaze it with a specific char.
 *
 * @size: size of the char.
 * @c: charcater.
 *
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptarray;

	ptarray = malloc(size * sizeof(char));
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
