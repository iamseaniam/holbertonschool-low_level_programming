#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: The index of the list where the new node should be added. Index starts at 0.
 * @n: The integer to be included in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 *         If it is not possible to add the new node at index idx, do not add the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new_node);
			return NULL;
		}
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return new_node;
}
