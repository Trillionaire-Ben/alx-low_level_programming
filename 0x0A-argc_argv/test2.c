#include <stdio.h>
#include <stdlib.h>

/**
 * right - fn
 * @size: input
 * Return: nothing
 */

void right(int size)
{
	int arr[size];

	while (arr[size] != 0)
	{
		int i;

		for (i = 0; i <= arr[size]; i++)
		{
			printf("#");
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
	right(4);
	return (0);
}
