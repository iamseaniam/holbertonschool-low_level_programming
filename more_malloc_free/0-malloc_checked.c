#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	return (ptr);
}
