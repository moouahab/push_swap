# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 19:33:54 by moouahab          #+#    #+#              #
#    Updated: 2023/11/07 15:09:39 by moouahab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBC =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

ADDITIONAL =	ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_striteri.c

LST =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
	ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
	ft_lstmap.c ft_lstnew.c ft_lstsize.c

SRCS = ${LIBC} ${ADDITIONAL} ${LST}

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
		@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		@ar -rsc ${NAME} ${OBJS}

all: 	${NAME}

clean:	
		@rm -f ${OBJS}

fclean:	clean;
		@rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus
