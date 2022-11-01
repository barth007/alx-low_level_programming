#include "main.h"
/**
 * *_memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @s: pointer to the memory area
 * @b: constant byte chararcter to be filled
 * @n: number of bytes
 * Return: Always a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (s);
}
