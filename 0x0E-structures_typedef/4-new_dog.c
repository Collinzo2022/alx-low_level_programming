#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - retuns length of a string
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copy string to src.
 * @dest: destination string.
 * @src: source of string.
 *
 * Return: copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len])
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}

/**
 * new_dog -  function creates a new dog
 * with members.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

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

