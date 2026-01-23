CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = push_swap.a
FUNCTIONS = 

OBJ = $(FUNCTIONS:.c=.o)

.c.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re