#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always 0 at success
*/

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
		putchar(48 + i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
