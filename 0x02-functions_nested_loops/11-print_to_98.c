#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check main
 * @n: An input interger
 * Description: fuction that prints all natural number
 * from nto 98, followed by a new line
 * Return: Nothing
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(", ");
		}

		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(", ");
		}

		printf("\n");
	}

}

