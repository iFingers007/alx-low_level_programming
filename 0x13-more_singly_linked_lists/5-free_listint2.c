#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Frees allocated memory in a linked list
 *@head: Pointer to Head of linkeed list
 *
 *Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
