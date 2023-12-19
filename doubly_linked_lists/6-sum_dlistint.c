#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) of a dlistint_t linked list.
 * If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
