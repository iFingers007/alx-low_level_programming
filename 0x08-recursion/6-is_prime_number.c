#include "main.h"

int is_prime_number_recursion(int n, int i);
int is_prime_number(int n);

/**
 *is_prime_number_recursion - To check for prime numbers
 *@n: Integer argument to check
 *@i: Factor to consider
 *
 *Return: 1 for prime and 0 for otherwise
*/

int is_prime_number_recursion(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else if (n % i == 0 || (n % (i + 2) == 0))
		return (0);

	return (is_prime_number_recursion(n, i + 6));
}

/**
 *is_prime_number - To check for prime
 *@n: Integer argument to check
 *
 *Return: 1 for prime and 0 for otherwise
*/

int is_prime_number(int n)
{
	return (is_prime_number_recursion(n, 5));
}
