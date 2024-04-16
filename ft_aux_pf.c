/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:59 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/21 13:12:14 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen_pf(const char *str)
{
	size_t			c;

	if (!str)
		return (0);
	c = 0;
	while (str[c])
		c++;
	return (c);
}

static void	ft_bzero_pf(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

static	void	*ft_calloc_pf(size_t number, size_t size)
{
	void	*dest;

	dest = malloc(number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero_pf(dest, number * size);
	return (dest);
}

static size_t	ft_len(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	base_len;

	len = 1;
	base_len = ft_strlen_pf(base);
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_aux_pf(unsigned long long n, char *base)
{
	char	*str;
	int		num_len;
	int		base_len;

	num_len = ft_len(n, base);
	base_len = ft_strlen_pf(base);
	str = ft_calloc_pf((num_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (num_len)
	{
		num_len = num_len - 1;
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
/*int main()
{
    unsigned long long number = 123456789;
    char *base = "0123456789abcdef";
    char *result;

    result = ft_aux_pf(number, base);
    if (result == NULL)
    {
        printf("Error: No se pudo convertir el número.\n");
        return (1);
    }
	
    printf("El número %llu en base %s es: %s\n", number, base, result);

    free(result);

    return (0);
}*/
