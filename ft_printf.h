
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_hexalong(unsigned long n);
char			ft_convert_hex_char(unsigned long long int n, int pxx);
char			*ft_select_hex(char *str, int size, unsigned long int n,
					int pxx);
int				ft_char_to_hexachar(unsigned long long int n, int pxx);
int				ft_porcentaje(char c, va_list args, int count);
int				ft_printf(const char *s, ...);
int				ft_unsigned_int(unsigned int long num);

#endif