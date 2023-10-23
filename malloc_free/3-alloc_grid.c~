#include "main.h"
#include <stdlib.h>
/**
 *Allocates a 2D grid of integers with the given width and height.
 *
 *This function allocates memory for a 2D grid and initializes all elements to 0.
 *
 *@param width  The width of the grid.
 *@param height The height of the grid.
 *
 *@return A pointer to the allocated grid, or NULL if allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
