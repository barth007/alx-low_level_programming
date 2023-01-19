#include "function_pointers.h"
/**
 * array_iterator - functions takes parameter array, size of array
 * and function pointer
 * @array: an array of integers
 * @size: size of array
 * @action: function pointer that takes an int datatype as arg.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
