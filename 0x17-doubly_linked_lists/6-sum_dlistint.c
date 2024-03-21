#include "lists.h"

/**
 * sum_dlistint - returns the sum of data (n) of a dlistint_t linked list.
 *@head: Pointer to head pointer
 *Return: Pointer to the current node or Null if it doesn't exist
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
