/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:35:56 by dani_mm__         #+#    #+#             */
/*   Updated: 2023/10/16 19:50:46 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*imprime una string*/

int ft_putstr(char *s)
{
    int i;
    
    if  (s == NULL)
        return (ft_putrstr("null)"));
    i = 0;
    
    while (s[i] != '\0')
    {
        ft_putchar(s[i]);
        i++;
    }
    return (i);
}