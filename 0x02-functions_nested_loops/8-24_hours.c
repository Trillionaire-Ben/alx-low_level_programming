#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  *jack_bauer - check description
 *  *Description: Prints time
 *  *@n, @x: Time
*/

void jack_bauer(void)
{
	int n, x;

	for (n = 0; n <= 23; n++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		}
	}
}
