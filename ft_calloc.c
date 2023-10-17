/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:21:57 by dani_mm__         #+#    #+#             */
/*   Updated: 2023/10/16 19:30:35 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*calloc devuelce un puntero a un espacio asignado
asegura que ese espacio apuntado este preparado
para almacenar todo tipo de objetos.
Retorna un voidal bloque de memoria reservado
si no puede reservar la memoria retorna un puntero NULL*/

void    *ft_calloc(size_t count, size_t size)
{
    /*varible puntero (*ptr)*/
    void    *ptr;
    
    /*malloc para la reserva de memoria*/
    ptr = malloc(size * count);
    
    /*si no se ha podido reservar devuelve null*/
    if (ptr == NULL)
        return (NULL);
    
    /*si se ha podido reservar se usa bzeropara reservar 
    el bloque de memoria, y escribimos 0 en función del 
    count y el size para poder cambiarlos posteriormente*/
    ft_bzero(ptr, (count *size));
    return (ptr);
}