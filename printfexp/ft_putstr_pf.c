/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:05:57 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/23 12:21:29 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*una 'str' como imput y puntero a 'counter', que es una variable de tipo 'size_t'. imprime los caracteres de la string
usando ft_putchar_pf. itera dentro del valor del contador para tomar e nº de caracteres impresos. Si el imput es 'NULL',
devuelve ('null')*/
void	ft_putstr_pf(char *str, size_t *counter)
{
/*checkeamos que 'str' no sea 'NULL', si es nulo es que no hemos devuelto una string y asignamos ('null')
al valor de la str.*/
	if (!str)
		str = "(null)";
	/*bucle que itera cada caracter de la str hasta que en cuentra el valor nulo.*/
	while (*str)
	{
		/*dos argumentos: '*str' que es e caracter en el que nos encontramos dentro de la iteración. 'counter' 
		puntero a 'size_t'. Esta función se encarga de imprimir un solo carácter y avanzar dentro de la iteración
		del bucle para saber el nº de caracteres impresos.*/
		ft_putchar_pf(*str, counter);
		str++;
	}
}
/*int main()
{
    size_t counter = 0;
    char *str = "Hello, World!";

    ft_putstr_pf(str, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
