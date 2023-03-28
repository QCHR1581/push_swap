NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC = push_swap.c list_functions.c read_check_functions.c swap_functions.c\
	push_functions.c rotate_functions.c split_arguments.c error_functions.c\
	prepare_sorting_functions.c sorting_functions.c free_functions.c

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
