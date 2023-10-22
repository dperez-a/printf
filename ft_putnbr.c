
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	x;

	x = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (n < 0)
	{
		x += ft_putchar('-');
		x += ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		x += ft_putnbr(n / 10);
		x += ft_putnbr(n % 10);
	}
	else
		x += ft_putchar(n + '0');
	return (x);
}
