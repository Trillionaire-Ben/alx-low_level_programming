#include <stdio.h>
#include "main.h"

/**
 * rev_string - fn that reverses a string
 * @s: params
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i += 1;

	while ((i = i - 1) && i >= 0)
		s[--i];
}
