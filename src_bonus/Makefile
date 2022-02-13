NAME	=	checker

LIBFT	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRC		=	checker_bonus.c \
			validation_params_bonus.c \
			check_sort_bonus.c \
			check_duplicats.c \
			error.c \
			./lst/ft_lenlist.c \
			./lst/ft_lstnew.c \
			./lst/ft_lstpushback.c \
			./lst/ft_reflstelem.c \
			./lst/ft_prelastelem.c \
			./lst/ft_lastelem.c \
			./operations/sa.c \
			./operations/sb.c \
			./operations/ss.c \
			./operations/pb.c \
			./operations/pa.c \
			./operations/ra.c \
			./operations/rb.c \
			./operations/rr.c \
			./operations/rra.c \
			./operations/rrb.c \
			./operations/rrr.c \
			projects/get_next_line/get_next_line.c \
			projects/get_next_line/get_next_line_utils.c \

HEADERS =	includes/defines_bonus.h \
			includes/structs_bonus.h \
			includes/checker_bonus.h \

OBJ		=	$(patsubst %.c,%.o,$(SRC))


all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -L../libs/libft -lft -o $@

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C ../libs/libft

re: fclean all

clean:
	rm -rf $(OBJ)
	make -C ../libs/libft clean

fclean: clean
	rm -rf $(NAME)
	make -C ../libs/libft fclean

.PHONY: all clean fclean re