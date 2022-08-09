#include <stdio.h>
#include "main.h"

/**
 * main - fn to print a string followed by new line
 * @s: character input
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
