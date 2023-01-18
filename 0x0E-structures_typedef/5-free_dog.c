#include "dog.h"
/**
 * free_dog - a function that frees dogs.
 * @d: a pointer
 * exit: exit with failure if true
**/
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);
	free(d);
	free(d->name);
	free(d->owner);
}
