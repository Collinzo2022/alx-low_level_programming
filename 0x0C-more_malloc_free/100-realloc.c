#include "main.h"
/**
 * _realloc - write a function that reallocates
 * a memory block using free and malloc.
 *
 * @ptr: pointer to newly allocated memory.
 * @old_size: old size of allocated memory.
 * @new_size: new size of allocated memory.
 *
 * Return: pointer to new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		return (new_ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)new_ptr + i) = *((char *) ptr + i);
			free(ptr);

			return (new_ptr);
		}

		else
			return (NULL);
	}
}

