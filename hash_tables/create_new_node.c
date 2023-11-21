#include "hash_tables.h"

hash_node_t *create_new_node(const char *key, const char *value)
{
    hash_node_t *new_node;

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (NULL);

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (NULL);
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (NULL);
    }

    return new_node;
}