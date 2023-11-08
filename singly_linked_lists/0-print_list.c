#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;

	if (node->str == NULL)
	{
		printf("[0], (nil)");
	}

	while (node != NULL)
	{
		printf("%s\n", node->str);
		node = node->next;
		size++;
	}
	return (size);
}