#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *delete_nodeint_at_index - Deletes node at index of a linked list
 *@head: Head of linked list
 *@index: Index where delete is to take place starting with 0
 *
 *Return: 1 if it succeeds but -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *t;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
		return (1);
	}
	p = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (p->next == NULL)
			return (-1);
		p = p->next;
	}
	t = p->next;
	p->next = t->next;
	free(t);
	return (1);
}
