CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = push_swap
LIBFT = libft/libft.a
FUNCTIONS = 

OBJ = $(FUNCTIONS:.c=.o)

.c.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(LIBFT) $(NAME)

$(LIBFT)
	make -C libft

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT)-o $(NAME)

clean:
	rm -f $(OBJ)
	@make clean -C libft

fclean: clean
	rm -f $(NAME)
	@make fclean -C libft

re: fclean all

.PHONY: all clean fclean re