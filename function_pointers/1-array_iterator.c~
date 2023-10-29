#include <stdio.h>
/**
 *array_iterator - Iterates over an array and performs an action on each element.
 *@array: The array to iterate over.
 *@size: The size of the array.
 *@action: A function pointer to the action to perform on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

void print_element(int element)
{
	printf("%d ", element);
}
