#include "dog.h"
#include <stdio.h>
/**
 * init_dog - intializes the function
 * @d: pointer to struct
 * @name: name of struct.
 * @age: age of struct.
 * @owner: name of owner.
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
