#include "list.h"
#define < stdio.h >

/**
 * print_listint - prints all elements of a listint_t list
 *
 * @x : head of linked lists node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *x);
{
	size_t count = 0;

	while (x != NULL)
	{
		printf("%d\n", x->n);
		x = x->next;
		count++;
	}
	return (count);
}
