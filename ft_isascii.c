/*
DESCRIPCIÓN
       Estas funciones comprueban si c, que debe tener el valor de un unsigned char o EOF, cae
       dentro de una cierta clase de caracteres de acuerdo con la localización en curso.

isascii()     
        Comprueba si c es un valor unsigned char de 7 bits, que encaje dentro del conjunto
        de caracteres ASCII. Esta función es una extensión de BSD y de SVID.


VALOR DEVUELTO
	   Los valores devueltos son no-cero si el carácter c cae dentro de la clase pedida, y cero
	   si no.

NOTA
	   Los detalles de qué caracteres pertenecen a qué clase dependen de la localización en
	   curso. Por ejemplo, isupper() no reconocerá una Å (`a' mayúscula con círculo encima) como
	   una letra mayúscula en la localización predeterminada C.
*/

#include <stdio.h>

int ft_isascii(int i)
{
    if (i >= 0 && i <= 127) //En el man ascii los caracteres del set decimal del 0 al 127 son imprimibles.
        return(1);
    else
        return (0);
}

int main(void)
{
    int i;

    i = 128;
    printf("%d", ft_isascii(i));
    return (0);
}