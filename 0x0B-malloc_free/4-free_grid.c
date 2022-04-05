#include <stdlib.h>

/**
 * free_grid - free a 2d array
 * @grid: 2d array to free
 * @height: number of rows of grid
 */
void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
