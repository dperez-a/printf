
#include "ft_printf.h"

int	ft_char_to_hexachar(unsigned long long int n, int pxx)
{
	int			size;
	static char	*str;

	size = ft_hexalong(n);
	str = ft_calloc(sizeof(char), (size + 1));
	if (n == 0)
		str[size - 1] = '0';
	ft_select_hex(str, size -1, n, pxx);
	if (pxx == 0)
	{
		if (str[size - 1] == '0' && size - 1 == 0)
			ft_printf("%s", "0x0");
		else
			ft_printf("0x%s", str);
	}
	else
		ft_printf("%s", str);
	free(str);
	str = NULL;
	return (size);
}
