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

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		_num = va_arg(valist, const unsigned int);
		if (separator == NULL)
			return;
		else if (i != n - 1)
			printf("%d%s", _num, separator);
		else
			printf("%d", _num);
	}
	printf("\n");
	va_end(valist);
}
