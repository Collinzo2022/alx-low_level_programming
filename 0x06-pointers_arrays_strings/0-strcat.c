#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: one of the string
 * @dest: second string.
 *
 * Return: A pointer to dest
 **/
char *_strcat(char *dest, char *src)
{

	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{	
		*dest = *src;
		dest++; 
		src++;


	}
	*dest = '\0';

	return (result);
}

