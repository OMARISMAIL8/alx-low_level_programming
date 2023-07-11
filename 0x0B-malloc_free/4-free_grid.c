#include"main.h"
#include"stdlib.h"

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 **/

void free_grid(int **grid, int height);
{
	int o;

	for (o = 0; o < height; o++)
		free(grid[o]);
	free(grid);
}
