#include "main.h"
/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: number of element in array
 * @c: The specific character to initialize
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else if (size > 0)
	{
		arr = malloc(size  * sizeof(char));
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
