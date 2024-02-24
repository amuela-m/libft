/*
DESCRIPCIÓN
	   Estas funciones comprueban si c, que debe tener el valor de un unsigned char o EOF, cae
	   dentro de una cierta clase de caracteres de acuerdo con la localización en curso.

strlen()
		Devuelve la longitud de serie. 

VALOR DEVUELTO
	   Los valores devueltos son no-cero si el carácter c cae dentro de la clase pedida, y cero
	   si no.

NOTA
	   Los detalles de qué caracteres pertenecen a qué clase dependen de la localización en
	   curso. Por ejemplo, isupper() no reconocerá una Å (`a' mayúscula con círculo encima) como
	   una letra mayúscula en la localización predeterminada C.
*/

#include <stdio.h>

size_t	ft_strlen(const char *s) //La estructura de la función nos la da el man strlen.
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return(i);
}

int main(void)
{
	const char  *s = "Hola que tal";
	printf("%zu", ft_strlen(s)); //Utilizo "%zu% debido a que me lo indica el man"
	return(0);
}