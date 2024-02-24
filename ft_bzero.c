#include <stdio.h>

/*
Se utiliza para establecer los primeros n bytes de un bloque de memoria en cero (es decir, establecerlos en '\0')
Pasos: 
1. Toma un puntero s que apunta al bloque de memoria que se va a llenar con 0.
2. Inicializa un puntero p al mismo lugar que s. 
3. Entra en un bucle (while). Este bucle se ejecutará mientras n sea > 0.
4. En cada iteración del bucle, asigna el valor 0, al byte apuntado por p
y luego incrementa el puntero p para avanzar al siguiente byte en el bloque de memoria. 
5. Repite este proceso hasta que se hayan establecido los primeros n bytes en 0.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = '\0';
	}
}

int main(void)
{
	char    *s;
	size_t  n;

	s[10] = "Ana";
	n = 3;

	ft_bzero(s, n);
	printf("%s\n", s);
	return(0);
}