#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
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
