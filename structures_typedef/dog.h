#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Defines a dog structure
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 *
 *Description: This structure defines a dog with a name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
