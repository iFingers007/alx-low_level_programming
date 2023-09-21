#include "lists.h"
#include <stdio.h>

/**
 * free_list - Frees allocated memory in a linked list
 *@head: Head of linkeed list
 *
 *Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
