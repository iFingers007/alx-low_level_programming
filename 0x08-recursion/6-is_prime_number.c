#include "main.h"

/**
 *is_prime_number - Check if a number is prime
 *@n: Number to be checked
 *
 *Return: 1 if its prime or zero otherwise
 */

int chck_prime(int i, int n)
{
	if (n == 0 || n == 1)
		return (0);
	else if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (chck_prime(i + 1, n));
}
/**
 *is_prime_number - Check if a number is prime
 *@n: Number to be checked
 *
 *Return: 1 if its prime or zero otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (chck_prime(2, n) == 0)
		return (0);
	else
		return (1);
}
