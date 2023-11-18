#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	struct hash_table_t = (struct hashtable*)malloc(sizeof(struct hashtable));
	hashtable->size = size;
	hashtable->table = (struct Entry**)malloc(sizeof(struct entry*));

	for (int i = 0; i < size; ++i)
	{
		hashtable->table[i] = NULL;
	}
	return hashtable;
}