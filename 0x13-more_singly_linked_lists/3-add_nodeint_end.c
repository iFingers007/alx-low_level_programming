#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_nodeint_end - Adds a node at the ending of a list
 *@head: Head of list argument
 *@n: Value to be added
 *
 *Return: Addess to added node or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		if (*head == NULL)
		{
			*head = newnode;
			return (newnode);
		}
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		return (newnode);
	}
	else
		return (NULL);


}