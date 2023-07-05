#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *free_listint2 - Frees a linked list
 *@head: pointer to Head of linked list
 *
 *Return: Void
*/

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (*head == NULL)
		return;
	else
	{
		while (*head != NULL)
		{
			p = *head;
			*head = (*head)->next;
			free(p);
		}
		*head = NULL;
	}
}
