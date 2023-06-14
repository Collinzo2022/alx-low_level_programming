#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fuunction returns pointer
 * to newly allocate space in memory which contains
 * copy of a string.
 *
 * @str: string
 *
 * Return: pointer on success and NULL on failure.
 **/
char *_strdup(char *str)
{
	char *s;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	s = malloc(sizeof(char *) * length + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		s[i] = str[i];
		
	}
	

	return (s);
}
