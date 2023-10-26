#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - Creates a new dog structure.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *
 *This function allocates memory for a new dog structure and initializes
 *its fields with the provided name, age, and owner values. It returns a
 *pointer to the newly created dog structure, or NULL if any memory
 *allocation fails.
 *
*Return: A pointer to the new dog structure, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = (char *)malloc(strlen(name) + 1);
	dog->owner = (char *)malloc(strlen(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
