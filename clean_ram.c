#include "codewar.h"

void clean_ram(char *ram)
{
  int	i;

  i = 0;
  while (i++ < RAM_COUNT)
    *(ram++) = 0;
}
