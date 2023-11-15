#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		size++;
	}
	return (size);
}
