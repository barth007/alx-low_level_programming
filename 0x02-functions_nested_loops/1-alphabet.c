#include "main.h"
/**
 * print_alphabet - function print alphabet
 * @void: takes no parameter
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return;

}
