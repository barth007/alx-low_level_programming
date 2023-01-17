#include "dog.h"
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

	info = malloc(sizeof(dog_t));
	if (!info)
		return (NULL);
	info->name = name;
	info->age = age;
	info->owner = owner;
	return (info);
}
