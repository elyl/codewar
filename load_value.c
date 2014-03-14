#include "codewar.h"
#include "ops.h"

u16	load_value(t_cpu *cpu, t_cpu **grid, byte op_type, byte value)
{
  mem	addr;

  /* Chargement depuis un regsitre */
  if (op_type & OPF_REG)
    return (cpu->reg[value]);
  /* Chargement depuis un registre pre-decremente */
  if (op_type & OPF_REG_DEC)
    {
      
    }
  /* Chargement depuis une adresse indirecte */
  if (op_type & OPF_ADDR_IND)
    {
      addr.word = load_value(cpu, grid, OPF_REG, value);
      return (load_value(&grid[cpu->position.x + CONVERT_VALUE(addr.addr.x)][cpu->position.y + CONVERT_VALUE(addr.addr.y)], grid, OPF_ADDR, addr.addr.addr));
    }
  /* Chargement depuis un registre post incremente */
  if (op_type & OPF_REG_INC)
    {

    }
  /* Chargement depuis une value directe */
  if (op_type & OPF_VAL)
    return (value);
  /* Chargement depuis une adresse */
  if (op_type & OPF_ADDR)
    return (cpu->ram[value]);
}
