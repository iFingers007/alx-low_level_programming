#include "main.h"

/**
 *_atoi - Converts a string to number
 *@s: String to be changed
 *
 *Return: Changed number
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= - 1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (sign * num);
}
