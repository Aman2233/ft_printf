# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amamo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/01 13:44:19 by amamo             #+#    #+#              #
#    Updated: 2024/07/01 13:44:27 by amamo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_putchar.c ft_putnbr.c ft_putptr.c\
			ft_putnbr_hexa.c ft_putstr.c\

OBJS 	= $(SRCS:.c=.o)
CC		= cc
FLAGS 	= -Wall -Wextra -Werror
RM		= rm -rf

NAME	= libftprintf.a

all: $(NAME)

$(NAME): 	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean: 		
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean $(NAME)

.PHONY: all clean fclean re 

