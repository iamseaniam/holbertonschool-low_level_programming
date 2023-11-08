#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		printf("char [11]%s\n", node->str);
		node = node->next;
		size++;
	}
	return (size);
}
