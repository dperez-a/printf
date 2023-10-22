

#include "ft_printf.h"

char	*ft_select_hex(char *str, int size, unsigned long int n, int pxx)
{
	unsigned long int	select;
	static char			convert;

	select = 0;
	while (n != 0)
	{
		select = (n % 16);
		str[size--] = ft_convert_hex_char(select, pxx);
		n = (n / 16);
	}
	return (str);
}
