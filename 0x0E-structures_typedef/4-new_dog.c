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

	if (name == NULL || isnan(age) || owner == NULL)
		return (NULL);
	info = malloc(sizeof(dog_t));
	if (!info)
		return (NULL);

	info->name = malloc(sizeof(strlen(name) + 1));
	if (info->name == NULL)
	{
		return (NULL);
		free(info);
	}
	strcpy(info->name, name);
	info->age = age;
	info->owner = malloc(sizeof(strlen(owner) + 1));
	if (info->owner == NULL)
	{
		return (NULL);
		free(info);
	}
	strcpy(info->owner, owner);
	return (info);
}
