#include "lists.h"
#include <stdio.h>

void premain(void) __attribute__((constructor));
/**
 *premain - prints before main function
 *
 *
 *Return: Void
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");

}
