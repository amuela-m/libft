/*
DESCRIPCIÓN
       Estas funciones comprueban si c, que debe tener el valor de un unsigned char o EOF, cae
       dentro de una cierta clase de caracteres de acuerdo con la localización en curso.

tolower()
        Convierte la letra mayúscula a minúscula, si es posible.
        Es decir, convierte un caracter dado a su equivalente en minúscula.



VALOR DEVUELTO
       El valor devuelto es la letra "convertida", o c si no se pudo realizar la conversión.

FALLOS
       Hay que tener en cuenta que los detalles de qué es mayúscula o minúscula dependen de cada
       lengua concreta.  Por ejemplo, en la localización "C" por omisión no existe la letra
       "umlaut", por lo que no se le aplica conversión.

       En algunas localizaciones no inglesas existen letras minúsculas que no tienen su corre‐
       spondiente letra mayúscula; por ejemplo la s aguda alemana.
*/

#include <stdio.h>

int ft_tolower(int i)
{
    if (i >= 65 && i <= 90)
        return (i + 32);
    else
        return (i);
}

int main(void)
{
    int i;
    
    i = 'D';
    printf("%c", ft_tolower(i));
    return (0);
}