#include "main.h"

/**
 *_abs - Gets absolute of a number
 *@n: Number argument
 *
 *Return: The absolute of the given number
*/

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n == 0)
		return (0);
	else
		return (n);
}
