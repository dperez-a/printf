
#include "ft_printf.h"

int	ft_hexalong(unsigned long n)
{
	int	x;

	x = 1;
	while (n > 15)
	{
		x++;
		n = (n / 16);
	}
	return (x);
}
