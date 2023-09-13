#include "main.h"

/**
 * argstostr - Converts arguments to string
 *@ac: Argument count
 *@av: Arguments vector
 *Return: Concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (ac--)
	{
		for (j = 0; *av[j] != '\0'; j++)
		{
			p = malloc(sizeof(_strlen(av[i])) + 1);
			if (p == NULL)
			{
				free(av);
				return (NULL);
			}
			p[j] = *av[j];
		}
		p[j] = '\n';
		i++;
	}
	return (p);
}
