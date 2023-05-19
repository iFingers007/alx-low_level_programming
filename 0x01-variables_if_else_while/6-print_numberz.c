#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always 0 at success
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(48 + i);
	putchar('\n');

	return (0);
}
