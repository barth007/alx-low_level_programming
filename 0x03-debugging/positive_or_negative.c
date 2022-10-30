#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes here */


/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*checking the value*/
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);


}
