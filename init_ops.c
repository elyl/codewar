#include "ops.h"
#include "codewar.h"

t_inst_list	*init_ops(t_inst_list *st)
{
  st[0].value = OP_MOVE;
  st[1].fn = inst_move;
  st[0].value = OP_PUSH;
  st[1].fn = inst_push;
  return (st);
}
