#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 * This function deletes and frees the memory of the hash table.
 * If the hash table is NULL, it doesn't do anything.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
