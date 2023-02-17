#include <stdio.h>
/**
 * main - introduction of the program
 *The program starts here
 *
 *Return: zero is the return of main
 */
int main(void)
{
	char ch;
    /* print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
