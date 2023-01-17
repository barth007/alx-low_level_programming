#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable of type struct dos
 * @d: the pointer to the struct
 * @name: argument
 * @age: argument
 * @owner: agument
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
