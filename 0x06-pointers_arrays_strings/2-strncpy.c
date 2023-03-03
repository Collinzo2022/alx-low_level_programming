#include"main.h"
/**
 * _strncpy - function copies a string
 * @dest: string to be copied
 * @src: string
 * @n: length of integer
 *
 * Return: dest.
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);

	}
	for (; i < n; i++)
	{

	*(dest + i) = '\0';

	}
	return (dest);

}
