/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:05:57 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/21 13:11:50 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *counter)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar_pf(*str, counter);
		str++;
	}
}
/*void	ft_putstr_pf(char *str, size_t *counter);

int main()
{
    size_t counter = 0;
    char *str = "Hello, World!";

    ft_putstr_pf(str, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
