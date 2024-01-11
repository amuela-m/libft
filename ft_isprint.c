/*
DESCRIPCIÓN
       Estas funciones comprueban si c, que debe tener el valor de un unsigned char o EOF, cae
       dentro de una cierta clase de caracteres de acuerdo con la localización en curso.

isprint()
        Comprueba si el carácter es imprimible, incluyendo el espacio en blanco.



VALOR DEVUELTO
	   Los valores devueltos son no-cero si el carácter c cae dentro de la clase pedida, y cero
	   si no.

NOTA
	   Los detalles de qué caracteres pertenecen a qué clase dependen de la localización en
	   curso. Por ejemplo, isupper() no reconocerá una Å (`a' mayúscula con círculo encima) como
	   una letra mayúscula en la localización predeterminada C.
*/

#include <stdio.h>

int ft_isprint(int i)
{
    if (i >= 32 && i <= 126)
        return (1);
    else
        return (0);
}

int main(void)
{
    int i;

    i = 45;
    printf("%d", ft_isprint(i));
    return (0);
}