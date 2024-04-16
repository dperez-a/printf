/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:50 by dperez-a          #+#    #+#             */
/*   Updated: 2024/04/16 15:53:07 by dani_mm__        ###   ########.fr       */
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
int main()
{
    int ret;

    ret = ft_printf("Testing %%c: %c\n", 'A');
	ret = printf("Testing %%c: %c\n", 'A');
    printf("Return value: %d\n\n", ret);

    ret = ft_printf("Testing %%s: %s\n", "Hello, world!");
	ret = printf("Testing %%s: %s\n", "Hello, world!");
    printf("Return value: %d\n\n", ret);

    ret = ft_printf("Testing %%p: %p\n", (void *)1234);
	ret = printf("Testing %%p: %p\n", (void *)1234);
    printf("Return value: %d\n\n", ret);

    ret = ft_printf("Testing %%d: %d\n", 1234);
	ret = printf("Testing %%d: %d\n", 1234);
    printf("Return value: %d\n\n", ret);

    ret = ft_printf("Testing %%i: %i\n", -5678);
	ret = printf("Testing %%i: %i\n", -5678);
    printf("Return value: %d\n\n", ret);

    ret = ft_printf("Testing %%u: %u\n", 5678);
	ret = printf("Testing %%u: %u\n", 5678);
    printf("Return value: %d\n\n", ret);

    ret = ft_printf("Testing %%x: %x\n", 255);
	ret = printf("Testing %%x: %x\n", 255);
    printf("Return value: %d\n\n", ret);

    ret = ft_printf("Testing %%X: %X\n", 255);
	ret = printf("Testing %%X: %X\n", 255);
    printf("Return value: %d\n\n", ret);

    ret = ft_printf("Testing %%%%: %%\n");
	ret = printf("Testing %%%%: %%\n");
    printf("Return value: %d\n\n", ret);

    return 0;
}
