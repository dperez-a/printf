/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:34:58 by jesanche          #+#    #+#             */
/*   Updated: 2023/11/09 15:25:31 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putuint_pf(va_arg(va, unsigned int), counter);
	else if (*str == 'x')
		ft_puthex_pf(va_arg(va, unsigned int), counter, "0123456789abcdef");
	else if (*str == 'X')
		ft_puthex_pf(va_arg(va, unsigned int), counter, "0123456789ABCDEF");
	else if (*str == '%')
		ft_putchar_pf('%', counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	size_t	counter;

	counter = 0;
	if (!str)
		return (0);
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}
/*int main()
{
    int count;
    char *str = "Hello, %s! You have %d messages.\n";
    char *name = "Alice";
    int messages = 5;

    count = ft_printf(str, name, messages);
    printf("Printed %d characters.\n", count);

    return 0;
}*/