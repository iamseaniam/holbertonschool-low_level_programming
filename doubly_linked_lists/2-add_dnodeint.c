#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	newNode->next = *head;
	newNode->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newNode;

	(*head) = newNode;

	return (newNode);
}
