/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:04 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/23 12:39:13 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*se usa para imprimir la dirección de memoria de un puntero en formato hexadecimal. Cogemos dos parámetros:
'ptr', el puntero del que queremos imprimir la dirección de memoria, y 'counter', puntero a size_t que nos
mide el nº de caracteres impresos.*/
void	ft_putptr_pf(void *ptr, size_t *counter)
{
/*declaramos un puntero a la variable llamada 'str' de tipo 'char'. Se usa para guardar la representación de
la dirección de memoria de la string en formato hexadecimal.*/
	char			*str;
/*declaramos una variable llamada 'ptr_address' de tipo 'unsigned long' para guardar la dirección de memoria del puntero 'ptr'!!
despues de haber sido casteado a 'unsigned long'.*/
	unsigned long	ptr_address;

	/*se castea el puntero 'ptr'a 'unsigned long'y se asinga el resultado de la variable 'ptr_address'. Se hace para asegurarnos 
	que la dirección de memoria se ha almacenado correctamente en 'ptr_address' antes de convertirla a su representación de string.*/
	ptr_address = (unsigned long)ptr;
	/*está llamando a la función ft_putstr_pf para imprimir la string "0x" en la salida estándar. El segundo parámetro 'counter'
	es un puntero a una variable 'size_t' que mide el nº de caracteres impresos.*/
	ft_putstr_pf("0x", counter);
/*llama a la función auxiliar 'ft_aux_pf' con los argumentos ' ptr_address'y 'HEX_LOW_BASE'*/
	str = ft_aux_pf(ptr_address, HEX_LOW_BASE);
	/*llamamos a la función 'ft_putstr_pf' para imprimir la string 'str'. el segundo parámetro 'counter' es un puntero a un 'size_t' 
	que mide el nº de caracteres impresos.*/
	ft_putstr_pf(str, counter);
	/*liberamos la memoreia allocada para la string 'str'. Se hace para prevenir leaks de memoriay un uso eficiente de la memoria.*/
	free(str);
}
/*int main()
{
    size_t counter = 0;
    int num = 42;

    ft_putptr_pf(&num, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
