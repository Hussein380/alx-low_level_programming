#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free grid space allocated
 * @grid: space allocated
 * @height: columns space
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
