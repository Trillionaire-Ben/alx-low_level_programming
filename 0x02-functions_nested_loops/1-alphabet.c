#include "main.h"

/**
 *  * print_alphabet(void) - check description
 *   *Description: print lower case letters a to z
*/

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x < 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
