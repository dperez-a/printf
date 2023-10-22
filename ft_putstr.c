
#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	x;

	if (!s)
		return (ft_putstr("(null)"));
	x = 0;
	while (s[x] != '\0')
	{
		ft_putchar(s[x]);
		x++;
	}
	return (x);
}
