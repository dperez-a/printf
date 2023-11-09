/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:53:59 by jesanche          #+#    #+#             */
/*   Updated: 2023/11/09 15:24:25 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++;
}
/*void	ft_putchar_pf(char c, size_t *counter);

int main()
{
    size_t counter = 0;
    char c = 'A';

    ft_putchar_pf(c, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/