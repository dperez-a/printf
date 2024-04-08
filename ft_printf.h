/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:42 by dperez-a          #+#    #+#             */
/*   Updated: 2024/04/08 09:56:07 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(char const *str, ...);
void	ft_putchar_pf(char c, size_t *counter);
void	ft_putstr_pf(char *str, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putuint_pf(unsigned int num, size_t *counter);
void	ft_puthex_pf(unsigned int num, size_t *counter, char *base);
void	ft_putptr_pf(void *ptr, size_t *counter);
char	*ft_aux_pf(unsigned long long n, char *base);

#endif