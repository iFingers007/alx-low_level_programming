#include "main.h"

/**
 *_atoi - Converts a string to number
 *@s: String to be changed
 *
 *Return: Changed number
*/

int _atoi(char *s)
{
	int i = 0, result = 0;
	int sign = 1;
	int digit;

	if (str[0] = '-')
	{
		sign = - 1;
		i++;
	}
	while (str[i] != '\0')
	{
		digit = str[i] - '0';
		if (digit >= 0 && digit <= 9)
		{
			result = result * 10 + digit;
			i++;
		}
		else
			break;

	}
	result *= sign;

	return (result);
}
