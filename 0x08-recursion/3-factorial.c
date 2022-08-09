#include <stdio.h>
#include "main.h"

/**
 * factorial - fn that returns the value of a given number
 * @n: integer value
 * Return: nothing
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
