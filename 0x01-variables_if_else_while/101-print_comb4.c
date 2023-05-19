#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always 0 at success
*/

int main(void)
{
int i, j, k;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (((i != j) && (i < j)) && ((j != k) && (j < k)))
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				{
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
	putchar('\n');

	return (0);
}
