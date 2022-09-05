#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct type
 * @name: params
 * @age: params
 * @owner: params
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
}

/**
 * main - fn to test struct
 * Description: nothing
 * Return: 0
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
