# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 21:25:11 by pileonar          #+#    #+#              #
#    Updated: 2025/04/09 11:14:17 by pileonar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libft.a
SRCS	= ft_isdigit.c \
ft_isalpha.c \
ft_tolower.c \
ft_toupper.c \
ft_isalnum.c \
ft_isprint.c \
ft_isascii.c \
ft_strlen.c \
ft_strncpy.c \
ft_strncmp.c \
ft_strlcat.c \
ft_strdup.c \
ft_memset.c \
ft_memcpy.c \
ft_memccpy.c \
ft_strlcpy.c \
ft_atoi.c \
ft_strchr.c \
ft_strrchr.c \
ft_strnstr.c \
ft_bzero.c \
ft_memcmp.c \
ft_memchr.c \
ft_memmove.c \
ft_calloc.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_striteri.c \
ft_strmapi.c \
ft_itoa.c \
ft_lstadd_back.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c


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
