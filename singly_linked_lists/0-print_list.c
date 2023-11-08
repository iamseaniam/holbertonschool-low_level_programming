#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		printf("[%d] %s\n", size_t(node->str), node->str);
		node = node->next;
		size++;
	}
	return (size);
}
