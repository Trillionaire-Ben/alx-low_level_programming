#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - fn to return success
 * or negative depending on if input is prime or not.
 * @n: integer to check
 * Return: int
 */

int is_prime_number(int n)
{
	int prime_con(int n, int i);

	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	return (prime_con(n, 2));
}

/**
 * prime_con - checks if n is prime
 * @n: test case
 * @i: recurring factors
 * Return: 1 if n is a prime, 0 if not
 */
int prime_con(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (n >= (i + 1) * (i * 1))
	{
		return (prime_con(n, i + 1));
	}
	return (1);
}
