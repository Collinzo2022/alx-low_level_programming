#include "main.h"
/**
 * _calloc - function allocates memory for an array
 * using malloc.
 *
 * @nmemb: elemeents of an array.
 * @size: size of each elements.
 *
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}


	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}


	return (arr);
}
