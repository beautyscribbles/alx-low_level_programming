#include "mAin.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid that will be fred
 * @height: height of grid to be fred
 * Return: freed grid
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
