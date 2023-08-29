#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node
 * at a given index
 * @head: a pointer to the address of the head
 * @index: the index of the node to be deleted
 *
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsined int count = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
