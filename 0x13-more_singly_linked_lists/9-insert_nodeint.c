#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *insert_nodeint_at_index - Adds a node at the index of a list
 *@head: Head of list argument
 *@idx: Index of list, begining from )
 *@n: Value to be added
 *
 *Return: Addess to added node or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		/* newnode->next = NULL; */
		if (*head == NULL)
		{
			*head = newnode;
			return (newnode);
		}
		else
			return (NULL);
		temp = *head;
		for (i = 0; i < (idx - 1); i++)
			temp = temp->next;

		newnode->next = temp->next;
		temp->next = newnode;
		return (newnode);
	}
	else
		return (NULL);


}
