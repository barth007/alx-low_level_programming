#include "main.h"
/*more header here*/

/**
 * print_alphabet_x10 - functio print alphabet 10 times
 * @void: takes no parameter
 * Return: void as a data type
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		char ch;

		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
