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
	unsigned int i, _num;
	char *space;

	va_start(valist, n);
	space = " ";
	for (i = 0; i < n; i++)
	{
		_num = va_arg(valist, const unsigned int);
		if (separator == NULL)
			return;
		if (i != n - 1)
			printf("%d%s%s", _num, separator, space);
		else
			printf("%d", _num);
	}
	printf("\n");
	va_end(valist);
}
