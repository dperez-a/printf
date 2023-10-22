
#include "ft_printf.h"

int	ft_porcentaje(char c, va_list args, int count)
{
	if (c == 'c')
		count = count + ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		count = count + ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count = count + ft_unsigned_int(va_arg(args, unsigned int));
	else if (c == 's')
		count = count + ft_putstr(va_arg(args, char *));
	else if (c == 'p')
	{
		count = (count + 2);
		count = count + ft_char_to_hexachar(va_arg(args, unsigned long int), 0);
	}
	else if (c == 'x')
		count = count + ft_char_to_hexachar(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		count = count + ft_char_to_hexachar(va_arg(args, unsigned int), 2);
	else if (c == '%')
	{
		count++;
		write(1, "%", 1);
	}
	return (count);
}
