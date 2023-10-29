#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

void print_element(int element)
{
	printf("%d ", element);
}
