NAME	=   libft.a
SRCS	= ft_isdigit.c \
ft_isalpha.c \
ft_tolower.c \
ft_toupper.c \
ft_isalnum.c \
ft_isprint.c \
ft_isascii.c \
ft_strlen.c \
ft_strcpy.c \
ft_strncpy.c \
ft_strcmp.c \
ft_strncmp.c \
ft_strcat.c \
ft_strncat.c \
ft_strlcat.c \
ft_strdup.c \
ft_memset.c \
ft_memcpy.c \
ft_memccpy.c

OBJS	= $(SRCS:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS}
	${LIBC} $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	$(RM) $(NAME) $(bonus)

clean:
	$(RM) -f $(OBJS) $(OBJS_B)

re: fclean all

.PHONY: all bonus clean fclean re .c.o
