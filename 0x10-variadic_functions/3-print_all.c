#include "variadic_functions.h"
/**
 * print_all - function that prints all characters
 * @format: a constant string argument
**/
void print_all(const char * const format, ...)
{
	int l, len;
	char *sep, *s;
	va_list valist;

	sep = ", ";
	va_start(valist, format);
	l = 0;
	len = 0;
	while (format && format[len])
		len++;
	while (format && format[l])
	{
		if (l == len - 1)
			sep = "";
		switch (format[l])
			{
				case 'c':
					printf("%c%s", va_arg(valist, int), sep);
					break;
				case 'i':
					printf("%d%s", va_arg(valist, int), sep);
					break;
				case 'f':
					printf("%f%s", va_arg(valist, double), sep);
					break;
				case 's':
					s = va_arg(valist, char *);
					if (s == NULL)
					{
						printf("(nil),%s", sep);
						break;
					}
					printf("%s%s", s, sep);
					break;
			}
		l++;
	}
	printf("\n");
	va_end(valist);
}
