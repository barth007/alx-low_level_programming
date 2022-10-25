#include "main.h"
/**
 * puts2 - function print every other element of a string, followed by \n
 * @str: a pointer variable
 * void: function returns no data type
 */
void puts2(char *str)
{
	int length, i, j;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; j <= length; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

