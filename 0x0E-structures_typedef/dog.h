#ifndef HEADER_H
#define HEADER_H
#include <stdlib.h>
/**
 * struct dog - defining a new type with the element in it
 * dog_t - Typedef for struct dog
 * @name: first member of data type char
 * @owner: second member of data type char
 * @age: third member of data type float
 * Description: Define a new type struct dog with the following elements
**/
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float , char *);
void free_dog(dog_t *);
#endif
