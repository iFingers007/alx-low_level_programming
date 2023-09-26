#include "lists.h"
#include <stdio.h>

/**
 *get_nodeint_at_index - Returns the nth item of a list
 *@head: Head of list
 *@index: Index to be returned
 *Return: Nth index or Null respectively
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);

}
