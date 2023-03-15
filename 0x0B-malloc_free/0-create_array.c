#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arrays of size and assign char
 * @c: char which is to be an array.
 * @size: size of an array
 *
 * Return: 0 if size is Null or array if successful.
 **/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
