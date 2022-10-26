#include "main.h"
/**
 * print_rev - prints a string, in reverse, following by a new line
 * @s: pointer variable, pointing to type char variable
 */
void print_rev(char *s)
{
	int i, n, len, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	len = length - 1;
	n = len;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
