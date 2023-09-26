#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Sums all data of a list
 *@head: Head node of list
 *
 *Return: Sum of list or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
