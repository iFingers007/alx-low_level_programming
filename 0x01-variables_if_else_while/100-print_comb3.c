#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always 0 at success
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i != j) && (i < j))
			{
				putchar(48 + i);
				putchar(48 + j);
				{
					if (i < 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
