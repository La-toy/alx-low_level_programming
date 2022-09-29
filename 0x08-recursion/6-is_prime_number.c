#include "main.h"

/**
 * is_prime_number - Checks whether a number is a
 * prime or not
 * @n: Number to be checked.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	int tmp = 1;

	if (tmp >= n)
		return (0);

	if (n % tmp == 0)
		return (1);

	return (is_prime_number(n % (tmp + 1)));
}
