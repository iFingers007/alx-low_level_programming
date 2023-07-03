#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *_strlen - Gets length of a string
 *@s: string argument
 *
 *Return: Lenght of string
*/

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 *add_node_end - Adds node at ending of list
 *@head: Pointer to head of list
 *@str: string to be added
 *
 *Return: Pointer to ending
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *pointer;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		pointer = *head;
		while (pointer->next != NULL)
		{
			pointer = pointer->next;
		}

		pointer->next = new_node;

		return (new_node);
	}
	else
		return (NULL);

}
