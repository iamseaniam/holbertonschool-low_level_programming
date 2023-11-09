#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		size++;
	}
	return (size);
}
