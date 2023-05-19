#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always 0 at success
*/

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
