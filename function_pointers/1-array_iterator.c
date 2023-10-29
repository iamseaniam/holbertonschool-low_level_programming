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
/**
*int main()
*{
*	int array[] = {1, 2, 3, 4, 5};
*	size_t size = sizeof(array) / sizeof(array[0]);
*
*	array_iterator(array, size, print_element);
*
*	return (0);
*}
*/
