#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		printf("%s\n", node->str);
		node = node->next;
		size++;
	}

	if (node->str == NULL)
	{
		printf("[0], (nil)");
	}
	return (size);
}
