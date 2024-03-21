#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: Pointer to head pointer
 *@index: Index of data to be added
 *Return: Pointer to the current node or Null if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (current->next != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
