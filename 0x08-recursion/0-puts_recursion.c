#include "main.h"
/**
 * _puts_recursion - recursive function that prints a string,
 * followed by a new line.
 * @s: char variable name pointing to the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
