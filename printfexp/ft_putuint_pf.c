/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:05:47 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/23 12:08:21 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*ft_putuint_pf se usa para imprimir un unsigend int en la salida estándar. Dos variabes, num; y counter, 
un contador que es un puntero a 'size_t' que toma el nº de caracteres que hemos imprimido.*/
void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	char			*str;

/* llamamos a la función auxiliar con dos argumentos ('num', '01123456789')*/
	str = ft_aux_pf(num, "0123456789");
    /*llamada a la función que se usa para imprimir una string en la salida estándar. Coge 'str', la string a imprimir 
    y 'counter' que es un puntero a 'size_t' que toma el numero de caracteres a imprimir*/
    ft_putstr_pf(str, counter);
    /*liberamos la memoria alocad para 'str'. IMPORTANTE!! para evitar leaks*/
    free(str);
}
/*int main()
{
    size_t counter = 0;
    unsigned int num = 1234567890;

    ft_putuint_pf(num, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
