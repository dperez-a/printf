/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:16 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/23 15:11:36 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*se usa para imprimir un int 'num' en la salida estándar. Toma dos parámetros: 'num', que es el integer que
queremos imprimir , y 'counter', que es el puntero a 'size_t'que mide el nº de caracteres que queremos imprimir.*/
void	ft_putnbr_pf(int num, size_t *counter)
{
	/*tiene en cuenta un caso especial donde el input number 'num' es = -2147483648. En ese caso, la función llama 
	recursivamente a ft_putnbr con el módulo de 10 de 'num' para imprimir los dígitos remanentes del nº, y después llama 
	a ft_putchar_pf para imprimir el dígito '8'. Es necesario porque el valor absloluto de -2147483648 es más grande que el 
	máximo valor positivo que puede ser representado por un dato de tipo 'int', así que no puede ser impreso directamente.*/
	if (num == -2147483648)
	{
		ft_putnbr_pf((num / 10), counter);
		ft_putchar_pf('8', counter);
	}
	/*esta condición está checkeando si el imput number 'num' es negativo. Si lo es, a función llama a ft_putchar_pf
	para imprimir el signo menos para indicar que es negativo, y la recursividad llama a ft_putnbr_pf */
	else if (num < 0)
	{
/*llamo a la función ft_putchar_pf para imprimir el signo menos e indicar que es un nº negativo. 'counter' es un puntero
a 'size_t' que mide el nº de caracteres impresos. Pasando 'counter'como argumento a 'ft_putchar_pf' la función puede incrementar
el valor de 'counter' cada vez que un carácter se imprime.*/
		ft_putchar_pf('-', counter);
/*recursiva que llama a ft_putnbr_pf con el valor absoluto de 'num' como argumento. Se hace para imprimir los dígitos restantes
después del signo negativo, para indicar que este es negativo.*/
		ft_putnbr_pf(-num, counter);
	}
/*Este else se encarga de imprimir cada dígito individualmente del imput 'num'.*/
	else
	{
		/*checkea que el dígito que se está procesando es mayor que 9. SI lo es, significa que quedan dígitos en el nº,
		así que la función llama recursivamente a ft_putnbr_pf con el siguiente dígito como argumento.*/
		if (num > 9)
		/*llama recursivamente a ft_putnbr_pf con el siguiente dígito del nº como argumento, para imprimir en el orden correcto.*/
			ft_putnbr_pf((num / 10), counter);
		/* The line `ft_putchar_pf(('0' + num % 10), counter);` is printing the current digit of the number. */
		/*imprime el dígito en curso.*/
		ft_putchar_pf(('0' + num % 10), counter);
	}
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
