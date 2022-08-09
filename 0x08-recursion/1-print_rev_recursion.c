#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - program to print a string in reverse
 * @s: string character
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
