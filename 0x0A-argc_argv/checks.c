#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - fn, task 4
 * @argc: argument constant
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc - 1 < 1)
	{
		printf("0\n");
	} else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("Sum of vectors: %d\n", sum);
	}
	return (0);
}
