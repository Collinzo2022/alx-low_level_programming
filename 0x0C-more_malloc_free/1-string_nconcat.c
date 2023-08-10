#include "main.h"
/**
 * string_nconcat - function that concatenates two string.
 * @s1: string one.
 * @s2: string two.
 * @n: no bytes allocated.
 *
 * Return: pointer to new memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len = n;
	unsigned int i;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		ptr[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[len++] = s2[i];

	ptr[len] = '\0';


	return (ptr);
}
