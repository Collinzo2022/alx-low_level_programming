#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width of the 2 dimensional array.
 * @height: height of the 2 dimensional array.
 *
 *Return: pointer to 2 dim array.
 */
int **alloc_grid(int width, int height)
{
	int **arraydim;
	int i, j;

	if (width <= 0 || height <= 0)
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
