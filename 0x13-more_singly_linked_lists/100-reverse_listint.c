#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *reverse_listint - Reverses a linked list using recursion
 *@head: Head of linked list to be reversed
 *
 *Return: Pointer to the reversed linked list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *t, *p;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	t = *head;
	p = (*head)->next;
	reverse_listint(&p);
	t->next->next = t;
	t->next = NULL;
	*head = p;
	return (*head);
}
