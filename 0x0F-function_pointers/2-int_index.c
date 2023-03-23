#include "function_pointers_h"

/**
 * int_index - function searches for an integer.
 * @size: number of elements in the array.
 * @array: the array itself.
 * @cmp: pointer to the function.
 *
 * Return: -1.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if cmp(array[i]))
					return (i);
				i++;
			}

		}

	}
	return (-1);
}
