#include "main.h"

/**
*  * print_alphabet_x10 - check Description
*   *Description: printing alphabets 10 times
*/

void print_alphabet_x10(void)
{
	char x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
