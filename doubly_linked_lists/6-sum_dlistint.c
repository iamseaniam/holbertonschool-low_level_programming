#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr-> n;
		ptr = ptr->next;
	}
	return (sum);
}