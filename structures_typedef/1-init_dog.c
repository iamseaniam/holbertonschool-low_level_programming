#include "dog.h"
#include <stdio.h>
#include <stddef.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf;
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return;
}
