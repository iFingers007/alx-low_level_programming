 #include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: Pointer to head pointer
 *@index: Index of data to be added
 *Return: Pointer to the current node or Null if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int count = 0, num = 0;

	temp = head;
	while (temp->next != NULL)
	{
		count += 1;
		if (count == index + 1)
		{
			current = temp;
		}
		temp = temp->next;
		num++;
	}
	if (index > num)
		return (NULL);
	return (current);
}
