#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string.
 * @str: params
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
