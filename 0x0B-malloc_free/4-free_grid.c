#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional array
 * @grid: pointer to the memory to be freed
 * @height: rows in the 2-D array
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
