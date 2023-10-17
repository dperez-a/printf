/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:14:01 by dani_mm__         #+#    #+#             */
/*   Updated: 2023/10/16 21:13:59 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*función auxiliar para convertir caracteres de base 16 en char
poniendo mayus y minus para %p, %x(mayus) y %X(minus)*/
char    ft_convert_hex_char(unsigned long long int n, int i)
{
    /*si n es menor que 10 hacemos una conversión de int a char*/
    if (n < 10)
        return (n + 48);

    /*si n es mayor que 9 entamos en el bucle y decimos 9 debido a que 
    en un dirección de memoria además de nº hay letras, y necesitamos escribirlas
    en minúsculas, una vez escritos los nº (n>9) escribimos las letras*/
    if (n > 9)
    {
        /*si i == 0, caso de %po si i == 1, caso de %x entramos en el bucle.
        sumamos 87 puesto que e la posición de la letra a minus menos 10, que es la
        cantidad de nº que no queremos tener en cuenta. [(return (n + 87)) == 
        (return (n - 10 + 'a'))]*/
        if (i == 0)
            return (n + 87);
        /*lo mismo pero en mayus, no hay que poner i == 2 ya que al poner else se
        entiende que es cualquiera que no sea ni i == 0 ni i == 1. lo mismo pero com mayus*/
        else 
            return (n + 55)
    }
    return (0);
}