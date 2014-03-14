NAME=	codewar
SRC=	main.c		\
	codewar.c	\
	init_grid.c	\
	clean_ram.c	\
	load_cpu.c	\
	play.c		\
	run_inst.c	\
	init_ops.c	\
	inst_move.c	\
	inst_push.c	\
	load_value.c
OBJ=	$(SRC:.c=.o)
CC=	gcc
CFLAGS=	-W -Wall -g
RM=	@rm -fv

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re:	clean fclean $(NAME)