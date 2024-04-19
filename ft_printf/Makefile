NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_printf.c aux_functions.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) 
			ar rcs $(NAME) $(OBJ) 

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY: all fclean clean