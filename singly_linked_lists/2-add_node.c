#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	char *clonedSheep_str;

	if (*head == NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
	}

	clonedSheep_str = strdup(str);
	if (clonedSheep_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = clonedSheep_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
