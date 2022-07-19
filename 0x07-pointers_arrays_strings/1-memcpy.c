#include "main.h"

/**
 * _memcpy - main function to copy memory address to diff location
 * @dest: memory to store copied address
 * @src: memory to copy address from
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}

	return (dest);
}
