#include "main.h"
/**
 * array_range - function that creates an array
 * of integers.
 * @min: minimum value of array.
 * @max: maximum value of array.
 *
 * Return: pointer to new created array.
 */
int *array_range(int min, int max)
{

	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}




	return (arr);
}
