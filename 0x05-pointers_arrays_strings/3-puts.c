#include "main.h"
/**
 * _puts - function prints a string,
 * followed by a new line to stdout.
 * @str: pointer variable
 * @*str: contains address variable type char
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
