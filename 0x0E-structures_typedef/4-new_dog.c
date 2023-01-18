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
	int i, len1, len2;
	char *name_copy, *owner_copy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	info = malloc(sizeof(dog_t));
	if (info == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (len1 + 1));
	if (name_copy == NULL)
	{
		free(info);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	info->name = name_copy;
	info->age = age;
	owner_copy = malloc(sizeof(char) * (len2 + 1));
	if (owner_copy == NULL)
	{
		free(info->name);
		free(info);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';
	info->owner = owner_copy;
	return (info);
}
