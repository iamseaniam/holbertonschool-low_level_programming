#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		printf("[%d] %s\n", (int)strlen(node->str), node->str);
		node = node->next;
		size++;
	}
	return (size);
}
