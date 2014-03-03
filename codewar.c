#include <stdlib.h>
#include <stdio.h>
#include "codewar.h"

int codewar(int argc, char **argv)
{
  int	i;
  int	cpu_c;
  t_cpu	**grid;

  if((grid = init_grid()) == NULL)
    return (-1);
  i = 0;
  cpu_c = 0;
  while (i < argc)
    {
      if (load_cpu(argv[i], grid) == -1)
	printf("Couldn\'t load %s \n", argv[i]);
      else
	++cpu_c;
      ++i;
    }
  if (cpu_c < 2)
    {
      printf("Too few CPU were loaded\n");
      return (-1);
    }
  play(grid);
  return (0);
}
