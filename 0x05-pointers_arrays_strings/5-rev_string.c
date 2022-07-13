#include <stdio.h>
#include "main.h"

/**
 * rev_string - fn that reverses a string
 * @s: params
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, x = 0;
	char art;

	i = 0;

	while (s[i] != '\0')
		i += 1;

	while (x < i--)
	{
		art = s[x];
		s[x++] = s[i];
		s[i] = art;
	}
}
