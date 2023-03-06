#include "main.h"

/**
 * _memset - Personal Memset
 *@s: memory area pointed to
 *@b: character to assign
 *@n: lenght
 *Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
		char *p = s;

		while (n--)
		{
			*p++ = (unsigned char)b;
		}
		return (s);
}
