#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 * @ac: argument count.
 * @av: argument pointer.
 *
 * Return: pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0;
	int length = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}
	length += ac;

	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[n] = av[i][j];
			n++;
		}
		if (new_str[n] == '\0')
		{
			new_str[n++] = '\n';
		}
	}

	return (new_str);
}
