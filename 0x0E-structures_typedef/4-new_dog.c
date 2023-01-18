#include "dog.h"
#include <math.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: parameter to the function
 * @age: parameter to the function
 * @owner: parameter to the function
 * Return: return a pointer
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *info;
	char *name_copy, *owner_copy;

	if (name == NULL || isnan(age) || owner == NULL)
		return (NULL);
	info = malloc(sizeof(dog_t));
	if (info == NULL)
		return (NULL);

	name_copy = malloc(sizeof(strlen(name) + 1));
	if (name_copy == NULL)
	{
		return (NULL);
		free(info);
	}
	strcpy(name_copy, name);
	info->name = name_copy;
	info->age = age;
	owner_copy = malloc(sizeof(strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		return (NULL);
		free(info);
	}
	strcpy(owner_copy, owner);
	info->owner = owner_copy;
	return (info);
}
