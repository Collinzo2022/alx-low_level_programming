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


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}


	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	_memset(arr, 0, nmemb * size);


	return (arr);
}
/**
 * _memset - fills memory with chars.
 * @s: array.
 * @c: character.
 * @num: number of bytes.
 *
 * Return: array.
 */
char *_memset(char *s, char c, unsigned int num)
{
	unsigned int i = 0;

	while (i < num)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
