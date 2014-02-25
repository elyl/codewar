/** Ce fichier définit les instructions reconnues par les cpu et leurs codes binaires */

#ifndef	__OPS_H__
#define __OPS_H__

/* flag de type d'operande et valeur associee */
#define	OPF_REG		0x00
#define OPF_REG_DEC	0x01
#define OPF_ADDR_IND	0x02
#define OPF_REG_INC	0x03
#define OPF_VAL		0x04
#define	OPF_ADDR	0x05

/* Instructions CPU et code associes */
#define OP_MOVE	0x00
#define OP_PSUH	0x01
#define OP_POP	0x02
#define OP_ADD	0x03
#define OP_CMP	0x04
#define OP_SUB	0x05
#define OP_LSL	0x06
#define OP_LSR	0x07
#define OP_AND	0x08
#define OP_OR	0x09
#define OP_XPR	0x0A
#define OP_NOT	0x0B
#define OP_BCC	0x0C
#define OP_BCS	0x0D
#define OP_BEQ	0x0E
#define OP_BNE	0x0F
#define OP_BLE	0x10
#define OP_BGE	0x11
#define OP_BRA	0x12
#define OP_BSR	0x13
#define OP_JCC	0x14
#define OP_JCS	0x15
#define OP_JEQ	0x16
#define OP_JNE	0x17
#define OP_JLE	0x18
#define OP_JGE	0x19
#define OP_JMP	0x1A
#define OP_JSR	0x1B
#define OP_RTS	0x1C
#define OP_TRAP	0x1D
#define OP_RTE	0x1E

#endif
