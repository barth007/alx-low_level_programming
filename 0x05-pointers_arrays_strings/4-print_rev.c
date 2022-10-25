#include "main.h"
/**
 * print_rev - prints a string, in reverse, following by a new line
 * @s: pointer variable, pointing to type char variable
 */

void print_rev(char *s)
{
	/*unsigned int length;

	length=0;

	while (*s)
	{
		s++;
		length++;
	}*/
	
	while (--*s)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
