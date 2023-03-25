NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memcmp.c\
		ft_strchr.c ft_strlen.c ft_tolower.c ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c\
		ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_printf.c ft_putnbr_ultimate.c ft_putptr.c ft_putnbr_unsigned.c ft_putstr.c ft_putchar.c\
		get_next_line_bonus.c get_next_line_utils_bonus.c

OBJS = $(SRCS:.c=.o) 	  

.PHONY:
	clean fclean re all

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)	

re: fclean all
