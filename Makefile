

##need to add 42 header and fix norm

SRCS	= ft_print.c


OBJS 	= $(SRCS:.c=.o)
CC		= cc
FLAGS 	= -Wall -Wextra -Werror
RM		= rm -rf

NAME	= libftprintf.a

$(NAME): 	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean: 		
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean $(NAME)

.PHONY: all clean fclean re 