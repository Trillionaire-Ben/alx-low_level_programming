#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - program to return length of string
 * @s: string character
 * Return: Always 0(success)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s +1) +1);
	}
	else
	{
		return (0);
	}
