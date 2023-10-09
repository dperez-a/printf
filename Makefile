# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 18:21:26 by marvin            #+#    #+#              #
#    Updated: 2023/10/09 18:21:26 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a+
INCLUDE= include
LIBFT= libft
SRC_DIR= src/
OBJ_DIR= obj/
CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f
INCLUDE= ft_printf.h
OBJ= $(SRC:.c=.o)

SRC =\
	ft_prinf \
	ft_printf_utils \
	ft_printf_ptr \
	ft_printd_unsigned \
	ft_print_hex 

SRC= $(addprefix $(SRC_DIR), $(addsuffix .c,$(SRC_FILES)))
OBJ= $(addprefix $(OBJ_DIR), $(addsuffix .o,$(SRC_FILES)))

all: $(NAME)

$(NAME): $(OBJ)
		@make -C $(LIBFT)
		@cp libf/libft.a .
		@mv libft.a $(NAME)
		@$(AR) $(name) $(obj)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(objf)
		@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
		@mkdir -p $(OBJ_DIR)

clean:
		@$(RM) -rf $(OBJ_DIR)
		@make clean -C $(LIBFT)

fclean: clean
		@$(RM) -f $(NAME)
		@$(RM) -f $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re