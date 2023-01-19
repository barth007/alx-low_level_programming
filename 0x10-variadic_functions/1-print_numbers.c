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

	if (separator == NULL || n == 0)
		exit(EXIT_FAILURE);
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(valist, int));
			break;
		}
		printf("%d%s ", va_arg(valist, int), separator);
	}
	va_end(valist);
}
