#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen: function prints the length of string
 * @s: string
 *
 * Return: length of string.
 **/
int _strlen(char *s)
{

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - copies one string to another.
 * @dest: string to be copied to.
 * @src: string that is been copied.
 *
 * Return: new string
 **/
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 *new_dog - funnction creates a new dog.
 *@name: name of the dog.
 *@age: age of the dog.
 *@owner: owner of the dog
 *
 * Return: pointer
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{

		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
