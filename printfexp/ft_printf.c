/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:50 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/23 16:11:48 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*ft_format imprime los argumentos basados en el formato específico de la 'str'. toma 'va_list' argummento 'va' 
que contieene los argumentos de las variables, un 'char*' argumento 'str' que representa el formato especificado
y un 'size_t*' argumento 'counter' que mide el nº de caracteres impresos.*/
void	ft_format(va_list va, char *str, size_t *counter)
{
/*Este fragmento de código está comprobando si el especificador de formato es 'c', que representa un carácter.
Si lo es, recupera el siguiente argumento de la lista variable (`va_list`) usando `va_arg(va, int)` 
y lo pasa a la función `ft_putchar_pf` junto con la variable `counter`. La función `ft_putchar_pf` es responsable
de imprimir un solo carácter y actualizar la variable `counter`.*/
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), counter);
/*Este fragmento de código está comprobando si el especificador de formato es 's', que representa una cadena de texto.
Si lo es, recupera el siguiente argumento de la lista variable (`va_list`) usando `va_arg(va, char *)` y lo pasa a la 
función `ft_putstr_pf` junto con la variable `counter`. La función `ft_putstr_pf` es responsable de imprimir una cadena
de texto y actualizar la variable `counter`.*/
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
/*Este fragmento de código está comprobando si el especificador de formato es 'p', que representa un puntero. Si lo es,
recupera el siguiente argumento de la lista variable (`va_list`) usando `va_arg(va, void *)` y lo pasa a la función
`ft_putptr_pf` junto con la variable `counter`. La función `ft_putptr_pf` es responsable de imprimir un puntero y
actualizar la variable `counter`. */
	else if (*str == 'p')
		ft_putptr_pf(va_arg(va, void *), counter);
/*Este fragmento de código está comprobando si el especificador de formato es 'i' o 'd', que representan enteros con
signo. Si lo es, recupera el siguiente argumento de la lista variable (`va_list`) usando `va_arg(va, int)` y lo pasa a
la función `ft_putnbr_pf` junto con la variable `counter`. La función `ft_putnbr_pf` es responsable de imprimir un
entero con signo y actualizar la variable `counter`.*/
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
/*Este fragmento de código está comprobando si el especificador de formato es 'u', que representa un entero sin signo.
Si lo es, recupera el siguiente argumento de la lista variable (`va_list`) usando `va_arg(va, unsigned int)` y lo pasa
a la función `ft_putuint_pf` junto con la variable `counter`. La función `ft_putuint_pf` es responsable de imprimir 
un entero sin signo y actualizar la variable `counter`.*/
	else if (*str == 'u')
		ft_putuint_pf(va_arg(va, unsigned int), counter);
/*Este fragmento de código está comprobando si el especificador de formato es 'x', lo cual representa la impresión de
un entero sin signo en formato hexadecimal. Si lo es, recupera el siguiente argumento de la lista variable (`va_list`
usando `va_arg(va, unsigned int)` y lo pasa a la función `ft_puthex_pf` junto con la variable `counter` y la cadena
"0123456789abcdef". La función `ft_puthex_pf` es responsable de imprimir el entero sin signo en formato hexadecimal
y actualizar la variable `counter`.*/
	else if (*str == 'x')
		ft_puthex_pf(va_arg(va, unsigned int), counter, "0123456789abcdef");
/*Este fragmento de código está comprobando si el especificador de formato es 'X', lo cual representa la impresión de
un entero sin signo en formato hexadecimal utilizando letras mayúsculas (A-F). Si lo es, recupera el siguiente argumento
de la lista variable (`va_list`) usando `va_arg(va, unsigned int)` y lo pasa a la función `ft_puthex_pf` junto con la
variable `counter` y la cadena "0123456789ABCDEF". La función `ft_puthex_pf` es responsable de imprimir el entero sin
signo en formato hexadecimal con letras mayúsculas y actualizar la variable `counter`.*/
	else if (*str == 'X')
		ft_puthex_pf(va_arg(va, unsigned int), counter, "0123456789ABCDEF");
/*Este fragmento de código está comprobando si el especificador de formato es '%', lo cual representa el carácter '%'
literal. Si lo es, llama a la función `ft_putchar_pf` con el carácter '%' y la variable `counter`. La función
`ft_putchar_pf` es responsable de imprimir un solo carácter y actualizar la variable `counter`. Esto permite imprimir
el carácter '%' tal cual, sin que sea interpretado como un especificador de formato.*/
	else if (*str == '%')
		ft_putchar_pf('%', counter);
}

/*La función `ft_printf` es una implementación personalizada de la función `printf` en C. Toma una cadena de formato
`str` como su primer argumento, la cual contiene una combinación de caracteres literales y especificadores de formato.
Los especificadores de formato están precedidos por el carácter '%' y se utilizan para especificar el tipo y formato
de los argumentos variables que siguen.*/
int	ft_printf(const char *str, ...)
{
	/*La declaración `va_list va;` está creando una variable llamada `va` del tipo `va_list`. El tipo `va_list` está
	definido en el archivo de encabezado `<stdarg.h>` y forma parte del mecanismo de manejo de argumentos variables
	en C. Sirve como una forma de gestionar un número variable de argumentos en funciones. El encabezado `<stdarg.h>`
	proporciona un conjunto de macros y funciones, como `va_start`, `va_arg` y `va_end`, que ayudan a acceder y
	manipular los argumentos variables dentro de una función que acepta un número variable de argumentos.*/
	va_list	va;
	/*La línea `size_t counter;` declara una variable llamada `counter` del tipo `size_t`. `size_t` es un tipo de
	entero sin signo en C que se utiliza para representar el tamaño de objetos en bytes. En el contexto de este
	fragmento de código, la variable `counter` se utiliza para llevar un seguimiento del número de caracteres que se
	han impreso o procesado. Es una práctica común utilizar `size_t` para variables que representan tamaños o
	recuentos para garantizar la compatibilidad en diferentes plataformas y evitar posibles problemas con el
	desbordamiento de enteros con signo.*/
	size_t	counter;

	/*La línea `counter = 0;` está inicializando la variable `counter` en 0. Esta inicialización es esencial,
	especialmente en escenarios donde la variable se utiliza para llevar un seguimiento de recuentos o índices. En este
	contexto en particular, `counter` se emplea para realizar un seguimiento del número de caracteres que se han impreso.
	Inicializarlo en 0 asegura que el conteo comience desde el principio y se pueda incrementar cada vez que se imprime
	o procesa un carácter. Es una práctica común inicializar variables antes de usarlas para evitar posibles problemas
	relacionados con el estado inicial de la variable.*/
	counter = 0;
	/*El código `if (!str) return (0);` está verificando si el parámetro `str` es un puntero nulo. Si lo es, significa
	que no se proporcionó ninguna cadena de formato, por lo que la función devuelve 0 de inmediato. Esta comprobación es
	necesaria para evitar posibles errores o bloqueos que podrían ocurrir si la función se llama sin una cadena de 
	formato válida.*/
	if (!str)
		return (0);
	/*`va_start(va, str);` es una macro que inicializa la variable `va_list` llamada `va` para que apunte al primer
	 argumento variable en la función. Toma dos argumentos: la variable `va_list` y el último parámetro con nombre antes
	de la lista de argumentos variables. En este caso, `va_start(va, str);` inicializa `va` para que apunte al primer
	argumento variable después del parámetro `str` en la función `ft_printf`. Esto permite que la función acceda a los
	argumentos variables utilizando la macro `va_arg`.*/
	va_start(va, str);
	/*El bucle `while (*str)` está iterando a través de cada carácter en la cadena `str` hasta que alcanza el carácter
	de terminación nula ('\0'). Este bucle permite que la función `ft_printf` procese cada carácter en la cadena de
	formato y determine si es un especificador de formato o un carácter literal.*/
	while (*str)
	{
		/*La condición `if (*str == '%')` está verificando si el carácter actual en la cadena `str` es un carácter '%'.
		Si es así, significa que el carácter marca el inicio de un especificador de formato.*/
		if (*str == '%')
		{
		/*El código `str++;` está incrementando el puntero `str` al siguiente carácter en la cadena. Esto se hace para
		omitir el carácter '%', ya que ya ha sido procesado.*/
			str++;
			/* The `ft_format` function is responsible for printing the arguments based on the specific format
			in the `str`. It takes a `va_list` argument `va` which contains the variable arguments, a `char*`
			argument `str` which represents the specified format, and a `size_t*` argument `counter` which
			measures the number of printed characters. */
			ft_format(va, (char *)str, &counter);
		}
	/*La línea `else ft_putchar_pf(*str, &counter);` se encarga de imprimir un carácter que no es un especificador de
	formato. Llama a la función `ft_putchar_pf` con el carácter actual `*str` y la dirección de la variable `counter`.
	La función `ft_putchar_pf` es responsable de imprimir un solo carácter y actualizar la variable `counter`. 
	Esto permite que la función `ft_printf` imprima cualquier carácter en la cadena de formato que no sea un
	especificador de formato.*/
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	/*`va_end(va);` es una macro que se utiliza para limpiar la variable `va_list` llamada `va` después de haber sido
	utilizada. Se llama al final de una función que utiliza `va_list` para indicar que no hay más argumentos que procesar.
	Esta macro es necesaria para garantizar una gestión adecuada de la memoria y evitar posibles problemas al acceder a
	memoria no válida o no inicializada.*/
	va_end(va);
	/*La línea `return (counter);` está devolviendo el valor de la variable `counter`. En el contexto de la función
	`ft_printf`, la variable `counter` lleva un seguimiento del número de caracteres que se han impreso o procesado.
	Al devolver este valor, la función está indicando el total de caracteres que se han impreso.*/
	return (counter);
}
/*int main()
{
    int count;
    char *str = "Hello, %s! You have %d messages.\n";
    char *name = "Alice";
    int messages = 5;

    count = ft_printf(str, name, messages);
    printf("Printed %d characters.\n", count);

    return 0;
}*/
