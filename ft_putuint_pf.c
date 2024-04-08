/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:05:47 by dperez-a          #+#    #+#             */
/*   Updated: 2024/04/08 09:55:56 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_aux_pf(num, "0123456789");
	ft_putstr_pf(str, counter);
	free(str);
}
/*int main()
{
    size_t counter = 0;
    unsigned int num = 1234567890;

    ft_putuint_pf(num, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
