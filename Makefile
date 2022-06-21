NAME		= libftprintf.a

SRC			= *.c

OBJ			= $(SRC:.c=.o)

CC			= cc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -c $(SRC)
				ar rcs $(NAME) $(OBJ)

all:		$(NAME)

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
