#include "main.h"
/**
 * alloc_grid - this is a pointer to a 2 dimensional aray of integers
 * @width: the width which serves as the row
 * @height: the height which serves as the row
 * Return: pointer to pointer of an array
 **/
int **alloc_grid(int width, int height)
{
	int **arr, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocates memory to the height*/
	arr = (int **)malloc(width * sizeof(int *));
	if (arr)
	{
		for (i = 0; i <= width; i++)
			/*allocates memory to the width*/
			arr[i] = (int *)malloc(height * sizeof(int));
		return (arr);
	}
	else
		return (NULL);

}
