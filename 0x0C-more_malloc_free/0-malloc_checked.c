#include "main.h"
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: this is the number of bytes to allocates
 * Return: (void) pointer
**/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	else
		return (p);
}
