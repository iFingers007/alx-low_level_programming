#include <stdio.h>

/**
 *premain - To be executed before the main function
 *
 *Return: void
*/

__attribute__ ((__constructor__)) void premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
