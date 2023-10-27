#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - Frees memory allocated for a dog structure
 *@d: Pointer to the dog structure to be freed
 *
 *This function frees the memory allocated for a dog structure. If the pointer
 *'d' is NULL, it does nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
