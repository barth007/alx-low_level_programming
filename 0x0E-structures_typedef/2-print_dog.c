#include "dog.h"
#include <stdio.h>
#include <math.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer argument
 * exit: EXIT_FAILURE
**/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(EXIT_FAILURE);
	}
	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("Age: ");
	if (d->age < 0.0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%.6f\n", d->age);
	}
	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
