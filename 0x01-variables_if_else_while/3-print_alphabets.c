#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always 0 at success
*/

int main(void)
{
	char a, b;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
