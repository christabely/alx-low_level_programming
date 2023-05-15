#include "main.h"
#include <stdlib.h>
/**
 * free_grid - dimensional grid
 * @grid: array of int
 * @height: grid height
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
