#include <stdlib.h>
#include "codewar.h"

t_cpu	**init_grid()
{
  int	i;
  int	j;
  t_cpu	**grid;

  if ((grid = malloc(GRID_HEIGHT * sizeof(t_cpu*))) == NULL)
    return (NULL);
  i = 0;
  while (i < GRID_LENGTH)
    {
      if ((grid[i] = malloc(GRID_LENGTH * sizeof(t_cpu))) == NULL)
	return (NULL);
      j = 0;
      while (j < GRID_HEIGHT)
	{
	  grid[i][j].reg[6] = 0x10;
	  clean_ram(&grid[i][j].ram[0]);
	  grid[i][j].ram[0x10] = 0x10;
	  grid[i][j].ram[0x11] = 0xD4;
	  ++j;
	}
      ++i;
    }
  return (grid);
}
