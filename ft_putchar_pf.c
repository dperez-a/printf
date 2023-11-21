/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:31 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/21 13:10:15 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++;
}
void	ft_putchar_pf(char c, size_t *counter);

/*int main()
{
    size_t counter = 0;
    char c = 'A';

    ft_putchar_pf(c, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
