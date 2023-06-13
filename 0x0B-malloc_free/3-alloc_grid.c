#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d
 * dimensional array of int
 *
 * @width: width of 2d array.
 * @height: height of 2d array.
 *
 * Return: pointer to 2d array or NULL on failure.
 **/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arraydim;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	arraydim = malloc(sizeof(int *) * height);
	if (arraydim == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arraydim[i] = malloc(sizeof(int) * width);
		if (arraydim[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arraydim[j]);
			}
			free(arraydim);
			return (NULL);

		}
	}


	return (arraydim);
}



