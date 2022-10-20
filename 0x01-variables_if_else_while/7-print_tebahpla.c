#include <stdio.h>
/*more headers here*/

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*variable declaration and initialization*/
	int n = 122;

	while (n != 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
