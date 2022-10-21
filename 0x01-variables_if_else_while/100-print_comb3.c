#include <stdio.h>
/*more headers here*/

/**
 * main - Entry - point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*variable declaration*/
	int i;
	int j;

	/*variable initialization*/
	i = 48;
	while (i <= 57)
	{
		/*variable initialization*/
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			/*condition*/
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
