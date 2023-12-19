#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;
	
	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (int)strlen(node->str), node->str);

		node = node->next;
		size++;
	}
	return (size);
}
