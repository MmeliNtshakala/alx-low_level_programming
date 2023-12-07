#include "lists.h"

/**
 * dlistint_len - returns number of elements in lists dlistint_t
 * @h: The head of dlistint_t list
 *
 * Return: returns number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
