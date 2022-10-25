#include <stdio.h>
/**
 * print_array - function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: it's a pointer variable
 * @n: it's a variable telling the size of the array
 * void: no data type
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");

}
