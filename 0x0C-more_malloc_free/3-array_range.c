#include "main.h"
/**
 * array_range - function creates an array of integers
 * @min: the minimum value
 * @max: the maxmium value
 * Return: a pointer
 **/
int *array_range(int min, int max)
{
	int i, size, *arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
