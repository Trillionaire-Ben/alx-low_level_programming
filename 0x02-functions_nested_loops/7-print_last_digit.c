#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - check description
 * Description: prints last digit of a number
 * @r: number to be checked
 * Return: 0.
*/

int print_last_digit(int r)
{
	r = r % 10;

	if (r < 10)
		return (r);
	return (0);
}
