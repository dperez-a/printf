/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:55:38 by jesanche          #+#    #+#             */
/*   Updated: 2023/11/09 15:23:30 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	char			*str;

	str = ft_aux_pf(num, "0123456789");
	ft_putstr_pf(str, counter);
	free(str);
}
/*void	ft_putuint_pf(unsigned int num, size_t *counter);

int main()
{
    size_t counter = 0;
    unsigned int num = 1234567890;

    ft_putuint_pf(num, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/