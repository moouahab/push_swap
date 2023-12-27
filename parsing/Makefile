SRC = 	controll/controll.c controll/parsing.c utils/atol.c\
	utils/ft_strcmp.c controll/master.c utils/parsing_utils.c\
      	utils/is_not_duplicate.c\

OBJS = ${SRC:.c=.o}

CC = gcc -Wall -Wextra -Werror -g3 -I ./

NAME = parsing.a

%.o: %.c
	@${CC} -c $< -o $@

${NAME}: ${OBJS}
	@ar -rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	@rm -rf ${OBJS}

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
