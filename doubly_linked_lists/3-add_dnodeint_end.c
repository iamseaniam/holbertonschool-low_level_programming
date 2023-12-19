#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the dlistint_t list.
 * @n: The integer value of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (newNode == NULL)
	{
		printf("cannot be NULL");
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;
	newNode->prev = last;

	return (newNode);

}
