#include <stdio.h>
/* more header come in here*/


/**
 * main - Entry  point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
