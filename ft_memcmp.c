#include <stdio.h>
#include <string.h>

/*
Compara dos bloques de memoria byte a byte y devuelve un valor entero que indica su relación lexicográfica.
Pasos: 
1. Inicia 2 punteros (p1 y p2) a los bloques de memoria (s1 y s2)
2. Entra en un bucle (while): 
- El bucle se ejecutará mientras n > 0.
3. En cada iteración del bucle, compara el byte apuntado por p1 con el
byte apuntado por p2. 
- Si son diferentes: la función devuelve la diferencia entre valores ASCII
de los bytes (*p1 - *p2). 
- Si los bytes son iguales: la función incrementa los punteros (p1 y p2) para avanzar al sigueinte byte
en ambos bloques de memoria. 
4. Repite el proceso hasta que se han comparado todos los n bytes o hasta que encuentre diferencia. 
5. Si se ha comparado exitosamente todo el bloque de memoria y no se han encontrado diferencias, 
la función retorna (0). Esto indica que los bloques de memoria son iguales. 
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = s1;
	p2 = s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

int main(void)
{
	const void  *s1;
	const void  *s2;
	size_t  n;

	s1 = "Hola";
	s2 = "A";
	n = 4;
	printf("%d\n", ft_memcmp(s1, s2, n));
	return (0);
}

/*int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}*/