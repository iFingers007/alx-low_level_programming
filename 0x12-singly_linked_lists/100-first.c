#include <stdio.h>

/**
 * premain - Prints before the
 *        main is executed.
 */

void __attribute__((__constructor__)) premain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
