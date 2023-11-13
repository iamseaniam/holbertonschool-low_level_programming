#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list, and returns
 * the head node's data (n).
 * @head: Double pointer to the head of the list.
 *
 * Return: If the linked list is empty - 0. Otherwise - the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int n;

	if (*head == NULL)
	{
     	return (0);
	}

	old_head = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(old_head);

	return (n);
}
