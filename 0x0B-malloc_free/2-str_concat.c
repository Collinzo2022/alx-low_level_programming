#include "main.h"
#include <stdlib.h>
/**
 * get_strlen - function prints the length
 * of the string.
 * @s: string whose length is to be found.
 *
 * Return: length of the string.
 **/
int get_strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i + 1);
}
/**
 * str_concat - function concatenate two string.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: new string on success or NULL
 **/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;
	int s1_length, s2_length;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	s1_length = get_strlen(s1);
	s2_length = get_strlen(s2);


	str = malloc(((s1_length + s2_length) - 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}

