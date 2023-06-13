#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees the 2D array
 *@grid: 2D array
 *@height: dimension
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0 ; x < height ; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
