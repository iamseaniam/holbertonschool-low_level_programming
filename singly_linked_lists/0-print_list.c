#include "lists.h"

size_t print_list(const list_t *h)
{
    char *str;
    const list_t *node = h;

    if (*str == NULL)
        printf("[0] (nil)");

    if (node != NULL)
    {
        printf("%s\n"), node->str);
        node = node->next;
    }
}

