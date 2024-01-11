/* 
DESCRIPCIÓN
	   Estas funciones comprueban si c, que debe tener el valor de un unsigned char o EOF, cae
	   dentro de una cierta clase de caracteres de acuerdo con la localización en curso.
isdigit()
			  comprueba si el carácter es un dígito (de 0 a 9).
VALOR DEVUELTO
	   Los valores devueltos son no-cero si el carácter c cae dentro de la clase pedida, y cero
	   si no.

	NOTA
	   Los detalles de qué caracteres pertenecen a qué clase dependen de la localización en
	   curso. Por ejemplo, isupper() no reconocerá una Å (`a' mayúscula con círculo encima) como
	   una letra mayúscula en la localización predeterminada C.
			  
*/

#include <stdio.h>

int ft_isdigit(char c) //Como parámetro pongo un char ya que voy a coger como referencia la tabla ASCII que es una tabla de caractéres.
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int main(void)
{
	char	c;

	c = '9';
	printf("%d", ft_isdigit(c));
	return (0);
}