#include "codewar.h"

int main()
{
  u16	toto = 0x4242;
  inst	i;

  i.b = toto;
  if (i.inst1.op == 0x18)
    printf("tutu\n");
  else
    printf("%d\n", sizeof(t_op_move));
  return (0);
}
