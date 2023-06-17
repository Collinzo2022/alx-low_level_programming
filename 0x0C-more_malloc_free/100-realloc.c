#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using
 * malloc
 * @ptr: pointer to the previous memory.
 * @new_size: new pointer to new memory.
 * @old_size: old pointer to old memory.
 *
 * Return: pointer to the new memkry.
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_str, *old_str;
	unsigned int i = 0;

	if (new_size == 0 && ptr != NULL)
		free(ptr);
	return (NULL);

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	new_str = malloc(new_size);
	if (!new_str)
		return (NULL);

	if (new_size < old_size)
	{
		while (i < new_size)
		{
			new_str[i] = old_str[i];
			i++;
		}
	}
	free(ptr);
	return (new_str);
}
