#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalSize = nmemb * size;
	void *ptr = malloc(totalSize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, totalSize);
	
	return (ptr);
}
