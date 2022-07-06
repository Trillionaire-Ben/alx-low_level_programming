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
	int n;

	if (r > 0)
		n = r % 10;
	else
		n = -1 * (r % 10);
	_putchar((n % 10) + '0');
	return (n % 10);
}
