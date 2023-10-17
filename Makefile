# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 18:21:26 by marvin            #+#    #+#              #
#    Updated: 2023/10/16 19:58:45 by dani_mm__        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AR = AR
ARFLAGS = crs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm
RMFLAGS = -f

SRCS = ft_memset.c ft_bzero.c ft_calloc.c ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_hexalong.c ft_convert_hex_char.c ft_select_hex.c ft_char_to_hexachar.c \
		ft_percent.c ft_printf.c ft_unsigned_int.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.c.o: $(SRC) $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^

.PHONY: all clean fclean re