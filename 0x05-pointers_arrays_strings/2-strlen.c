#include <stdio.h>
#include "main.h"

/**
 * _strlen - print length of string
 * @s: string parameter
 * Return: length
 */

int _strlen(char *s)
{
	int length;
	int i;

	length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
