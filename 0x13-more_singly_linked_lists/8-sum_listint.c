#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *sum_listint - Sums an Integer linked list of type listint_t
 *@head: Pointer to head
 *
 *Return: Sum of Linked list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	p = head;
	if (head == NULL)
		return (0);
	while (p->next != NULL)
	{
		sum += p->n;
		p =  p->next;
	}
	sum += p->n;
	return (sum);

}
