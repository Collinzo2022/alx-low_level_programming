#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints a struct dog.
 * @d: pointer to dog.
 *
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("nil\n");
	if (d->owner == NULL)
		printf("nil\n");
	if (d->age == 0)
		printf("nil\n");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
