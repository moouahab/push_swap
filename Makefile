CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = push_swap

SRC_DIR = ./commande ./libft ./ft_printf ./include ./parsing ./stack ./split ./main.c ./algo_turk ./sort_five
SRC_FILES = $(shell find $(SRC_DIR) -name "*.c")
OBJ_DIR = obj
OBJ_FILES = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
DEP_FILES = $(OBJ_FILES:.o=.d)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

-include $(DEP_FILES)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

