/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:16:34 by dani_mm__         #+#    #+#             */
/*   Updated: 2023/10/16 21:21:56 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*cuenta los caracteres de un hexadecimal*/
int ft_hexalong(unsigned long n)
{
    /*contador a 1 porque si el nº existe ya contamos con un digito
    mínimo devuelve siempre 1. */
    int i;
    
    i = 1;
    /*mientras que sea mayor que 15, añadimos 1 y sacamos el cociente
    del hexadecimal*/
    while (n > 15)
    {
        n = (n / 16);
        i++;
    }
    /*devolvemos el valor de x, que será la cantidad de caracteres que existen*/
    return (i);
}