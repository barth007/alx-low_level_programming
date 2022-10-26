#include "main.h"
/**
 * print_rev - prints a string, in reverse, following by a new line
 * @s: pointer variable, pointing to type char variable
 */
void print_rev(char *s)
{
	int i, n, length;
	char temp;

	temp = s[0];
	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (n = (length - 1); s[n] >= 0; n--)
	{
		temp = s[n];
		_putchar(temp);
	}
	_putchar('\n');
}
