#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer to list to print
 * return: 0
 */

size_t print_list(const list_t *h)
{
    size_t a;

    a = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nill)\n");
            h = h->next;
            a += 1;
            continue;
        }
        printf("[%i] %s\n", h->len, h->str);
        a += 1;
        h = h->next;
    }
    return (a);
}