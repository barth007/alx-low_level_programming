#include "function_pointers.h"
/**
 * int_index - function takes argument as an array, size of the array
 * and function pointer
 * @array: argument of an array
 * @size: size of an array
 * @comp: function pointer taking an integer argument
**/
int int_index(int *array, int size, int (*cmp)(int))
{
        int i, index;

	index = -1;
	if (size <= 0)
		return (-1);
        for (i = 0; i < size; i++)
        {
                if (cmp(array[i]) != 0)
                {
			index = i;
			break;
		}
        }
	if (index < 0)
		return (-1);
	return (index);
}
