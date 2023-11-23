/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:24 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/23 15:20:55 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*convierte un unsigned int 'num' en su representación en hexadecimal y lo imprime. tres parámetros 'num'
nº a convertir; 'counter', puntero a size_t que mide el nº de caracteres impresos; y 'base', que es una
string que respresenta la base del numero del sistema, en este caso dígitos hexadecimales.*/
void	ft_puthex_pf(unsigned int num, size_t *counter, char *base)
{
    /*puntero a una variable 'str' de tipo 'char'. Almacena la representación hexadecimal del 'num' antes de imprimirlo.*/
    char	*str;

    /*asigna el valor de retorno de la función ft_aux_pf a la variable 'str'.*/
    str = ft_aux_pf(num, base);
    /*llama a la función ft_putstr_pf para imprimir la string'str'. 'counter' mide el nº de caracteres impresos.*/
    ft_putstr_pf(str, counter);
    /*libera la memoria allocada para str.*/
	free(str);
}
/*int main()
{
    size_t counter = 0;
    unsigned int num = 255;
    char *base = "0123456789abcdef";

    ft_puthex_pf(num, &counter, base);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
