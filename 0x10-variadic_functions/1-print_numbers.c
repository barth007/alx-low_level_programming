#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: a string pararmeter
 * @n: number of variable argument passed
 * @...: variable argument
 * exit: exit from function when code fails
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int num;

	if (n <= 0)
	{
		exit(EXIT_FAILURE);
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		if (separator)
		{
			printf("%d", num);
			if (i < n - 1)
				printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
