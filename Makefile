NAME			= push_swap
CC				= cc
CFLAGS			= -Wall -Wextra -Werror -O3
INCLUDES		= -Ilibs/Libft -I.
LIBS			= -Llibs/Libft -lft
SRC				= main.c src/stack_init.c src/utils.c src/stack_utils.c \
					src/commands/push.c src/commands/swap.c src/commands/rotate.c \
					src/commands/reverse_rotate.c src/sort/small.c src/sort/normal.c \
					src/stack_arrange.c
OBJ				= $(SRC:.c=.o)
LIBS			= libs/libs.a

all: $(LIBS) $(NAME)

$(LIBS):
		@make -C libs

$(NAME): $(OBJ)
		@echo "Linking $(NAME)"
		$(CC) $(OBJ) $(LIBS) -o $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
		rm -f $(OBJ)
		@make -C libs clean

fclean: clean
		rm -f $(NAME)
		@make -C libs fclean

re: fclean all

.PHONY: all clean fclean re
