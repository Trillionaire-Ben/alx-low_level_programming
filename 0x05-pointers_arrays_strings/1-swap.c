#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two intergers
 * @a: integers param
 * @b: second int param
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

