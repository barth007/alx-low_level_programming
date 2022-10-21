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
	int k;

	/*variable initialization*/
	i = 48;
	while (i <= 57)
	{
		/*variable initialization*/
		j = i + 1;
		while (j <= 57)
		{
			/*variable initialization*/
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				/*condition*/
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
