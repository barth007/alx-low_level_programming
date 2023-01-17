#ifndef HEADER_H
#define HEADER_H
#include <stdlib.h>
/**
 * struct dog - defining a new type with the element in it
 * @name: first member of data type char
 * @owner: second member of data type char
 * @age: third member of data type float
 * Description: Define a new type struct dog with the following elements
**/
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
