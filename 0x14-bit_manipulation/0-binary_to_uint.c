#include "main.h"
/**
 *_power - function that returns the power of a number
 *@base: the base argument
 *@exponential: argument
 *Return: the power of a number
**/
unsigned int _power(unsigned int base, unsigned int exponential)
{
	unsigned int result;

	result = 1;
	while (exponential--)
		result *= base;
	return (result);
}
/**
 *binary_to_uint - converts binary to base 10
 *@b: the string
 *Return: the converted number
**/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, _b, size, j;
	int i;

	sum = 0;
	size = 0;
	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		size++;
		i++;
	}
	j = 0;
	for (i = size - 1; i >= 0; i--)
	{
		if (!isdigit(b[i]) || (b[i] != '1' && b[i] != '0'))
			return (0);
		if (b[i] == '1')
			_b = 1 * _power(2, j);
		else
			_b = 0;
		sum += _b;
		j++;
	}
	return (sum);
}
