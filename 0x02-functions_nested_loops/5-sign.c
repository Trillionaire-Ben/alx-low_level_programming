#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - check description
 * @n: character to check
 * Description: print the sign and return value
 * Return: 0 or 1 or -1.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
