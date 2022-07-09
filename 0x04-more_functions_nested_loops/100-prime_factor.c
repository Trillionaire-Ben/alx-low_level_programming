#include <stdio.h>
/**
 *  * main - print the largest prime factor of an int
 *   * Return: Always 0(Success)
 */
int main(void)
{
	long int var = 612852475143;
	long int primefact = 2;

	while (var > 1)
	{
		if (var % primefact == 0)
		{
			var /= primefact;
		}
		else
		{
			primefact++;
		}
	}
	printf("%ld\n", primefact);

	return (0);
}
