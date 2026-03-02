CC = cc
FLAGS = -g -Wall -Wextra -Werror -I.
NAME = push_swap
LIBFT = libft/libft.a

FUNCTIONS = push_swap.c \
	stack_utils.c \
	checks.c \
	errors.c \
    turk/analysing.c \
	turk/movimentation.c \
	operations/sort_stacks.c \
    operations/push.c \
	operations/rotate.c \
	operations/rev_rotate.c \
    operations/swap.c \
	operations/sort_three.c

OBJ = $(FUNCTIONS:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJ)
	@make clean -C libft

fclean: clean
	rm -f $(NAME)
	@make fclean -C libft

re: fclean all

.PHONY: all clean fclean re