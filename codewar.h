#ifndef __CODEWAR_H__
#define __CODEWAR_H__

#define REG_COUNT	8
#define	RAM_COUNT	256

#define OP_SIZE		5

typedef unsigned short int u16;
typedef unsigned char byte;

/* Structure reprensentant un CPU
   reg:	Registres du CPU
   ram:	RAM du CPU
 */
typedef struct s_cpu
{
  u16	reg[REG_COUNT];
  char	ram[RAM_COUNT];
}	t_cpu;

/* Strcuture representant une instruction a un operande 
   op:		code de l'instruction
   op_type:	type d'operande
   value:	valeur de l'operande
*/
typedef struct s_1_op_inst
{
  byte	op:		5;
  byte	op_type:	3;
  byte	value:		8;
}	t_1_op_inst;

/* Structure representant une instruction a deux operandes
   op:		code de l'instruction
   reg:		registre de destination
   op_type:	type de source
   value:	valeur de l'operande 
*/
typedef struct s_2_op_inst
{
  byte	op:		5;
  byte	reg:		3;
  byte	op_type:	3;
  byte	value:		5;
}	t_2_op_inst;

/* Structure representant une instruction MOVE
   op:		code de l'instruction
   src_type:	type de source
   dest_type:	type de destination
   reg:		numero de registre de destination
   dest:	adresse de destination
*/
typedef struct s_op_move
{
  byte	op:		5;
  byte	src_type:	3;
  byte	dest_type:	3;
  byte	reg:		3;
  u16	dest;
}	t_op_move;


/* Union regroupant les differents types d instructions
   word:	instruction complete
   inst2:	structure pour les instructions a deux operandes
   inst1:	structure pour les instructions a un operande
   mv:		sturcture pour les inscrutions move
*/
typedef union u_inst
{
  u16		word;
  t_2_op_inst	inst2;
  t_1_op_inst	inst1;
  t_op_move	mv;
}	inst;

#endif
