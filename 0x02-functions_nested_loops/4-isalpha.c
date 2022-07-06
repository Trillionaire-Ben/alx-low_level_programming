#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
*  *_isalpha - check description
*  *Description: checks if c is alphabet
*    *@c: character to check
*     *Return: 0 or 1.
*
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
