#include "main.h"

/**
* free_grid -> removing memory allocation
* @grid: grid to be freed
* @height: matrix height
* Return: 0
*/
void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
		free(grid[p]);
	free(grid);
}
