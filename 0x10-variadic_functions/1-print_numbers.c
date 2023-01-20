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

	if (!separator || n == 0)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i < n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(valist);
}
