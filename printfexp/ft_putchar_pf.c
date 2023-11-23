/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:31 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/23 15:29:09 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*es una función que se usa para la implementación de la propia función ft_printf. toma un caracter
'c' y un puntero a 'size_t' de la variable 'counter'.*/
void	ft_putchar_pf(char c, size_t *counter)
{
/*imprime un caracter 'c' en la salida estándar. Tres argumentos: el file descriptor (1 para la salida estandar),
un puntero a el dato que queremos escribir('&c'), y el nº de bytes a escribir*/
	write(1, &c, 1);
    /*incrementa el valor de la variable 'counter' en 1.*/
    (*counter)++;
}
/*int main()
{
    size_t counter = 0;
    char c = 'A';

    ft_putchar_pf(c, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
