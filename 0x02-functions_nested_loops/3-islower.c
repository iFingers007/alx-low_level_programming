#include "main.h"

/**
 *_islower - To check lowercase
 *@c: argument to be checked
 *
 *Return: lower case
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
