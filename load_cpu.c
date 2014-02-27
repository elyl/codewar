#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "codewar.h"

int load_cpu(char *file, t_cpu **grid)
{
  int	fd;
  int	x;
  int	y;

  if ((fd = open(file, O_RDONLY)) == -1)
    return (-1);
  x = (int)random() % GRID_HEIGHT;
  y = (int)random() % GRID_LENGTH;
  return (read(fd, &grid[x][y].ram[0], READ_SIZE));
}
