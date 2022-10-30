#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int line;

	line = n;
	for (line = n; line > 0; line--)
		_putchar('_');
	_putchar('\n');
}
