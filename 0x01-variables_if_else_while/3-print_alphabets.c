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
		putchar(ch);
    /* print lowercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
