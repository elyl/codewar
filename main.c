#include <stdio.h>
#include "codewar.h"

int main(int argc, char **argv)
{
  if (argc < 3)
    {
      printf("Usage : ./codewar <cpu1.asm> <cpu2.asm> ...\n");
      return (1);
    }
  if (codewar(argc, argv) == -1)
    return (1);
  return (0);
}
