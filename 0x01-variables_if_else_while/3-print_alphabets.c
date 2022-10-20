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
	int cap = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
