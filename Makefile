NAME = push_swap

LIBFT = libft/libft.a

PRINTF = ft_printf/libftprintf.a

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -g

SRCS =	pop.c\
		errors.c\
		push.c\
		reverse_rotate.c\
		rotate.c\
		stack_init.c\
		stack_utils.c\
		swap.c\
		sort_three.c\
		push_swap.c\
		init_a_to_b.c\
		init_b_to_a.c\
		sort_stacks.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	@make -s -C ./libft
	@make bonus -s -C ./libft

$(PRINTF):
	@make -s -C ./ft_printf

$(NAME):	$(OBJS) $(LIBFT) $(PRINTF)
		ar rcs $(NAME) $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) $(PRINTF) $(LIBFT) -o $(NAME)
		@echo "$(NAME) created"

clean:
	@make clean -s -C ./libft
	@make clean -s -C ./ft_printf

fclean:		clean
				@$(RM) $(NAME)
				@$(RM) $(OBJS)
				@$(RM) $(LIBFT)
				@$(RM) $(PRINTF)
				@echo "$(NAME) deleted"
				
re: fclean $(NAME)

.PHONY: fclean all