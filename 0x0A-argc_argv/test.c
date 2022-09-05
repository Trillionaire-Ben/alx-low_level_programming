#include <stdio.h>
#include <stdlib.h>

/**
 * left_angle - fn
 * @size: input
 * Return: nothing
 */

void left_angle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = 0;
		while (j < size)
		{
			printf("# ");
			j++;
		}
		printf("\n");
	}
}

/**
 * main - fn
 * Return: 0
 */

int main(void)
{
	left_angle(4);
	return (0);
}
