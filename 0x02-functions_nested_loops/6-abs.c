#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - check description
 * Description: to compute the absolute value of an integer
 * @r: number to check
 * Return: 0.
*/

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
