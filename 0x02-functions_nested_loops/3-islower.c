#include "main.h"
/**
 * _islower - For printing the lowest case characters
 * *@c: character for argument
 *
 * Return: 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
