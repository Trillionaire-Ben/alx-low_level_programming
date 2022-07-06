#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
*  *_islower - check description
*   *Description: check for lower case characters
*    *@c: character to print
*     *Return: 0 or 1.
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
