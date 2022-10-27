#include "main.h"
/**
 * puts_half - functions should print the second half of the string
 * @str: pointer to a char variable datatype
 * void: returns no datatype
 */
void puts_half(char *str)
{
	int n, length, i;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		while (n <= length)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
