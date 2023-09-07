#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat, *s1null, *s2null, *both_null;

    concat = string_nconcat("Best ", "School !!!", 6);
    s1null = string_nconcat(NULL, "School !!!", 6);
    s2null = string_nconcat("Best", NULL, 6);
    both_null = string_nconcat(NULL, NULL, 6);
    printf("%s\n", concat);
    printf("%s\n", s1null);
    printf("%s\n", s2null);
    printf("%s\n", both_null);
    free(concat);
    free(s1null);
    free(s2null);
    free(both_null);
    return (0);
}
