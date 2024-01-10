/* 
    DESCRIPCIÓN
       Estas funciones comprueban si c, que debe tener el valor de un unsigned char o EOF, cae
       dentro de una cierta clase de caracteres de acuerdo con la localización en curso.

    isalpha()
        Comprueba si el carácter es alfabético; en la localización estándar "C", es equiva‐
        lente a (isupper(c) || islower(c)).  En algunas localizaciones, pueden existir car‐
        acteres adicionales para los que isalpha() sea verdad: letras que no sean ni
        mayúculas ni minúsculas.

    VALOR DEVUELTO
       Los valores devueltos son no-cero si el carácter c cae dentro de la clase pedida, y cero
       si no.

    NOTA
       Los detalles de qué caracteres pertenecen a qué clase dependen de la localización en
       curso. Por ejemplo, isupper() no reconocerá una Å (`a' mayúscula con círculo encima) como
       una letra mayúscula en la localización predeterminada C.
*/

#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{

}

int main(void)
{
    char c = 'A';
    printf("%c\n");
    return (0);
}
