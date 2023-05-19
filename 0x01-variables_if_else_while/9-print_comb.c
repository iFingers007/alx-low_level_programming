#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always 0 at success
*/

int main(void)
{
	int i;

	i = 0;
	do {
		putchar(48+i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}while (i <= 9);
	putchar('\n');

	return (0);
}
