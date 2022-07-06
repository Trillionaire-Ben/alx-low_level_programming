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
	int n;

	for (n = 0; n <= 23; n++)
	{
		for (int x = 0; x <= 59; x++)
		{
			_putchar(n);
			_putchar(':');
			_putchar(x);
			_putchar('\n');
		}
	}
}
