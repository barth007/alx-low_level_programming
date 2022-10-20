#include <stdio.h>
/* more header come in here*/


/**
 * main - Entry  point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*variable declaration and initializition*/
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
