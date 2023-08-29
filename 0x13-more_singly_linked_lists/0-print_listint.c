#include "list.h"
#define <stdio.h> 

/**
 * print_listint :Prints all elements of a list
 * @n : number of nodes 
 * 
 * Return : number of nodes
 */
size_t print_listint(const listint_t *h);
{
	size_t count = 0;
	while (h != NULL)
	{
		printf("%d\n", h -> n);
		h = h -> next;
		count++;
	}
	return (count);
}
