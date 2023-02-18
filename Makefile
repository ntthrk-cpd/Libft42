FLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS = 

OBJS = $(SRCS: .c = .o)

all = $(NAME)

%o: %c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
