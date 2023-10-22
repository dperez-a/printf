

NAME = libftprintf.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

SRCS = ft_memset.c ft_bzero.c ft_calloc.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_hexalong.c ft_convert_hex_char.c ft_select_hex.c ft_char_to_hexachar.c ft_porcentaje.c ft_printf.c ft_unsigned_int.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.c.o : $(SRC) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY: all clean fclean re