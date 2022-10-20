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
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{

			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
