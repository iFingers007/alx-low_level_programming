#include "lists.h"
#include <stdlib.h>

/**
 *free_list - Free memory allocated
 *@head: Pointer to memomry
 *
 *Return: Void
*/

void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}


}
