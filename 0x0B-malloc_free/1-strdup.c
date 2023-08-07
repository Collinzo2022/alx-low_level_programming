#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function finds the length of
 * a string.
 *
 * @str: string.
 *
 * Return: length of string.
 */

int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * _strdup - function returns a pointer to a newly allocated space
 * and a copy of the string.
 *
 * @str: string.
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *ptstr;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(str);

	ptstr = malloc((length + 1) * sizeof(char));

	if (ptstr != NULL)
	{
		strcpy(ptstr, str);
	}

	return (ptstr);
}
