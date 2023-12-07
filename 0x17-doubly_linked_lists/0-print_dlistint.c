#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h);
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
