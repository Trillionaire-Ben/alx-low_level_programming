#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - fn to print the natural squareroot of a number
 * @n: integer to find squareroot
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int _squareroot(int n, int i);

	return (_squareroot(n, 1));
}

/**
 * _squareroot - _sqrt_recursion
 * @n: integer parameter
 * @i: integer input
 * Return: square root
 */

int _squareroot(int n, int i)
{
	if (n < 0)
		return (-1);
	/* the next line actually ensures the natural squareroot part.*/
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_squareroot(n, i + 1));
}
