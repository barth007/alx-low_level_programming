#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index.
 *@n: number to be checked
 *@index: index
 *Return: return the index
**/
int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	mask = 1 << index;
	if (n != 0)
		return ((n & mask) != 0);
	else
		return (-1);
}
