NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC = push_swap.c list.c read_and_check.c swap.c\
	push.c rotate.c split_arguments.c error.c\
	prepare_sorting.c prepare_sorting_helpers.c sort_big.c sort_small.c free.c

OBJS = $(SRC:.c=.o)

LIBFT = ./libft/libft.a 

.phony:
	clean fclean re all

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	make clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./libft
	rm -f push_swap
	
re: fclean all
