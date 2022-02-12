NAME	=		push_swap

LIBFT	=		libft.a

CC		=		gcc

CFLAGS	=		-Wall -Wextra -Werror

SRC		=		push_swap.c \
				params_validation.c \
				check_repeat_int.c \
				./lst/ft_lstnew.c \
				./lst/ft_lstpushback.c \
				./lst/ft_addlstfront.c \
				./lst/ft_lenlist.c \
				./lst/ft_lastelem.c \
				./lst/ft_prelastelem.c \
				./lst/ft_reflstelem.c \
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
				./sort/sort_arr.c \
				./sort/sort_two.c \
				./sort/sort_three.c \
				./sort/sort_numbers.c \
				./sort/sort_five.c \
				./sort/big_sort.c \
				./sort/big_sort_utils.c \
				./sort/sort_four.c \

HEADERS	=		./includes/defines.h \
				./includes/structs.h \
				./includes/push_swap.h \

OBJ		=		$(patsubst %.c,%.o,$(SRC))


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