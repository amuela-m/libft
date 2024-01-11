/*
DESCRIPCIÓN
       Estas funciones comprueban si c, que debe tener el valor de un unsigned char o EOF, cae
       dentro de una cierta clase de caracteres de acuerdo con la localización en curso.

isalnum()     
        comprueba si el carácter es alfanumérico; es equivalente a (isalpha(c) || isdigit(c)).


VALOR DEVUELTO
	   Los valores devueltos son no-cero si el carácter c cae dentro de la clase pedida, y cero
	   si no.

	NOTA
	   Los detalles de qué caracteres pertenecen a qué clase dependen de la localización en
	   curso. Por ejemplo, isupper() no reconocerá una Å (`a' mayúscula con círculo encima) como
	   una letra mayúscula en la localización predeterminada C.
*/

#include <stdio.h>

char    ft_isalnum(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    else
        return (0);
}

int main(void)
{
    char    c;

    c = '&';
    printf("%d", ft_isalnum(c));
    return (0);
}