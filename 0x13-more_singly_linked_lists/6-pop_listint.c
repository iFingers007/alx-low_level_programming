#include "lists.h"
#include <stdio.h>

/**
 *pop_listint -  deletes the head node of a listint_t linked list.
 *@head: Pointer to head of list
 *
 *Return: The head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	num = temp->n;
	free(temp);
	return (num);

}
