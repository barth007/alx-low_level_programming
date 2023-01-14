#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer to the memory area
 * @b: constant byte chararcter to be filled
 * @n: number of bytes
 * Return: Always a pointer
 */
char *_memset(char *s, char b,  unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - this function that allocates memory
 * for an array, using malloc
 * @nmemb: the number of element in the arrau
 * @size: The size of each element
 * Return: a pointer
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *q;

	if (nmemb == 0 || size == 0)
		return (NULL);
	q = malloc(size * nmemb);
	if (!q)
		return (NULL);
	for (i = 0; i <= nmemb; i++)
		_memset(q, 0, size * nmemb);
	return (q);

}
