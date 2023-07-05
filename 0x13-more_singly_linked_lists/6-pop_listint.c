#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *pop_listint - Deletes head of a linked list
 *@head: Pointer to head node
 *
 *Return: Value of popped list
*/

int pop_listint(listint_t **head)
{
	listint_t *p;
	int value;

	if (*head == NULL)
		return (0);
	p = *head;
	value = p->n;
	if (p->next == NULL)
	{
		free(p);
		*head = NULL;
		return (value);
	}
	*head = p->next;
	free(p);
	return (value);
}
