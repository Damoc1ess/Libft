NAME		= libft.a
SRCS		= srcs/ft_isalpha.c\
				srcs/ft_isdigit.c\

			
OBJS		= $(SRCS:.c=.o)
INCLUDES	= includes
FLAGS 		= -Werror -Wextra -Wall
CC 		= gcc

all:	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o:
	$(CC) $(FLAGS) -I $(INCLUDES) -c $< -o $(@:.c=.o)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re