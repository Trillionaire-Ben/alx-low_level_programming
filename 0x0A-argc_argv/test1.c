#include <stdio.h>
#include <stdlib.h>

/**
 * left - fn
 * @size: input
 * Return: nothing
 */

void left(int size)
{
	int i;

	while (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			printf("# ");
		}
		printf("\n");
		size -= 1;
	}
}

/**
 * main - fn
 * Return: 0
 */

int main(void)
{
	left(4);
	return (0);
}
