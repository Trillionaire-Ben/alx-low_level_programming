#include <unistd.h>

int _putchar(char c)
{
	char i[8] = '_putchar';

	for (i = 0; i < 9; i++)
		{
			_putchar(i);
		}
		_putchar('\n);
	
	return (0);
}
