# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 16:44:11 by dperez-a          #+#    #+#              #
#    Updated: 2024/04/15 16:44:14 by dperez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar rcs

SRC	=	ft_printf.c			\
		ft_putchar_pf.c		\
		ft_putstr_pf.c		\
		ft_putnbr_pf.c		\
		ft_putuint_pf.c		\
		ft_puthex_pf.c		\
		ft_putptr_pf.c		\
		ft_aux_pf.c			\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re