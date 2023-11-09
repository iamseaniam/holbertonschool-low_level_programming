#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (*head == NULL)
	{
		list_t *new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
	}

	char *clonedSheep_str = strdup(str);
	if (clonedSheep_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

}
