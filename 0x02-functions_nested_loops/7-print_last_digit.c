#include "main.h"
/**
 * print_last_digit - function prints the last digit of a number
 * @n: takes parameter n integer as an input
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
