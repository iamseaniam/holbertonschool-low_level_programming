#include "dog.h"
#include <stdio.h>
/**
 *print_dog - Prints information about a dog.
 *@d: A pointer to the struct representing the dog.
 *
 *This function prints the name, age, and owner of the dog.
 *If any of these fields are NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");

}
