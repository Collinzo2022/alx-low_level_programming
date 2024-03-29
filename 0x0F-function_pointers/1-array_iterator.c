#include "function_pointers.h"
/**
 * array_iterator - executes a function on each
 * given element of an array.
 * @array: pointer to an array.
 * @size: size of the array.
 * @action: pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
