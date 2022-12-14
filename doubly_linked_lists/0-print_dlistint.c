#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: Pointer to head node of list to print
 * Return: number of nodes on list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
