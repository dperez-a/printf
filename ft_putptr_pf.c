/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:04 by dperez-a          #+#    #+#             */
/*   Updated: 2024/04/08 18:22:40 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	char			*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)ptr;
	ft_putstr_pf("0x", counter);
	str = ft_aux_pf(ptr_address, HEX_LOW_BASE);
	ft_putstr_pf(str, counter);
	free(str);
}
/*int main()
{
	size_t counter = 0;
	int num = 99;

	ft_putptr_pf(&num, &counter);
	printf("\nPrinted %zu characters.\n", counter);
	return 0;
}*/
