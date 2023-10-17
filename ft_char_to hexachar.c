/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to hexachar.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:53:09 by dani_mm__         #+#    #+#             */
/*   Updated: 2023/10/16 20:13:09 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*convertir caracteres en caracteres de base 16*/

int ft_char_to_hexachar(unsigned long long int n, int i)
{
    int size;
    static char *str;
    
    /*contamos la cantidad de catacteres del hexadecimal mediante la función 
    hexalong y lo almacenamos en size*/ 
    size = ft_hexalong(n);
    
    /*alocación de memoriapara nuestra string mediante calloc y 
    lo almacenamos en el puntero*/
    str = ft_calloc(sizeof(char), (size + 1));
    if (n == 0)
    str[size - 1] = '0';
    
    /*convierte el hexadecimal en char para poder escribiro*/
    ft_select_hex(str, size -1, n, i);

    /*si i = 0 entramos en el bucle, para el caso %p*/
    if (i == 0)
    {
        /*si no existe contenido se escribe 0x0*/
        if (str[size -1] == '0' && size -1 == 0)
            ft_printf("%s", "0x0");
        /*si existe contenido se escribe 0x y el contenido de la string*/
        else
            ft_printf("0x%s", str);
    }
    /*si la string es %x i %X escrubunus la string*/
    else
        ft_printf("%s", str);
    
    /*liberar la memoria alocada*/
    free(str);
    str = NULL;
    return (size);
}