#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - fn to print value of x^y
 * @x: base value
 * @y: subscript value
 * Return: nothing
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
