#include <stdio.h>
#include "main.h"

/**
 * _memset - check decription
 * to print a constant byte
 * @s: memory area to store b
 * @b: value to store in s
 * @n: number of the memory area pointed by s
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}

