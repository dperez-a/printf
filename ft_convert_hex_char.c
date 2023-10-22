

#include "ft_printf.h"

char	ft_convert_hex_char(unsigned long long int n, int pxx)
{
	if (n < 10)
		return (n + '0');
	if (n > 9)
	{
		if (pxx == 0 || pxx == 1)
			return (n - 10 + 'a');
		else
			return (n - 10 + 'A');
	}
	return (0);
}
