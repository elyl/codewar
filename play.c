#include "ops.h"
#include "codewar.h"

void play(t_cpu **grid)
{
  int	i;
  int	j;
  int	cycle;

  cycle = 0;
  while (cycle < CYCLE_NUMBER)
    {
      i = 0;
      while (i < GRID_HEIGHT)
	{
	  j = 0;
	  while (j < GRID_LENGTH)
	    {
	      run_inst(&grid[i][j++]);
	    }
	  ++i;
	}
      ++cycle;
    }
}
