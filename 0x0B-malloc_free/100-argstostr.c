#include "main.h"
#include <stdlib.h>
/**
 * argstostr - joins all the arguments of
 * your program.
 * @ac: argument count
 * @av: argument vector.
 *
 * Return: 0
 **/
char *argstostr(int ac, char **av)
{
	int i, j, n = 0, length = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}
	length += ac;

	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[n] = av[i][j];
			n++;
		}
		if (ptr[n] == '\0')
			ptr[n++] = '\n';
	}
	return (ptr);
}
