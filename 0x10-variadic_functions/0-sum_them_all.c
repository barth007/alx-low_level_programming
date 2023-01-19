#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of input which is a constant
 * @...:it can take as many parameter it wants
 * Return: sum of all parameters
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}
	va_end(valist);
	return (sum);
}
