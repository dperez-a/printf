/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:15:34 by dani_mm__         #+#    #+#             */
/*   Updated: 2023/10/16 19:20:33 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* n bytes a cero en la cadena s, por tanto si n
es = 0 no hará nada, se busca llenar cada posición 
de la cadena tamaño n con 0*/

void    ft_bzero(void *s, size_t n)
{
    /*usando memset utilizamos un puntero 
    que señala donde queremos escribir tantos 0
    como tamaño tenga n*/
    ft_memset(s, 0,n);
}