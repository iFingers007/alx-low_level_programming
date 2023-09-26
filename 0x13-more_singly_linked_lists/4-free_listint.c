#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees allocated memory in a linked list
 *@head: Head of linkeed list
 *
 *Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
