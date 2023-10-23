#include "main.h"
#include <stdlib.h>
/**
 *free_grid - Frees memory allocated for a 2D grid.
 *@grid: Pointer to the 2D grid of integers to be freed.
 *@height: The number of rows in the grid.
 *
 *This function frees the memory associated with a 2D grid of integers.
 *It iterates through each row of the grid and then frees the grid itself.
 *
 *@grid: Pointer to the 2D grid.
 *@height: The number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}


