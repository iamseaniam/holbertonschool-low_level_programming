#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the first node of the double linked list.
 * @idx: Index of the list where the new node should be added, starts at 0.
 * @n: Data for the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{
		if (i + 1 == idx)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new_node = malloc(sizeof(dlistint_t));

			if(new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
