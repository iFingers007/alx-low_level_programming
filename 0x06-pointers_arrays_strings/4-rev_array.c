#include "main.h"

/**
 *reverse_array - Reverses the content of an aray
 *@a: Pointer to the array
 *@n: Number of elements in the array
 *
 *Return: Void
*/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i > (n / 2); i--)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
