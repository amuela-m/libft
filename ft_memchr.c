#include <string.h>

/*
Imagina que tienes una caja llena de juguetes y quieres encontrar un juguete en particular. 
La función ft_memchr te ayuda a hacer eso. Le dices a ft_memchr qué juguete estás buscando 
y cuántos juguetes hay en la caja.
Cuando usas ft_memchr, le dices: "Oye, necesito encontrar este juguete en esta caja. Aquí está la caja 
y este es el juguete que busco". Entonces, ft_memchr busca en la caja el juguete que le dijiste 
y te dice si lo encontró o no.
Es como si le pidieras a alguien que busque un juguete específico en tu caja de juguetes. 
Si lo encuentran, te lo dan. Si no, te dicen que no lo encontraron.
Entonces, ft_memchr te ayuda a encontrar un juguete específico en una caja de juguetes. 
¡Es muy útil cuando necesitas encontrar cosas en la memoria de la computadora!
*/

void	*memchr(const void *str, int character, size_t n)
{
	const unsigned	char *ptr = str; // Convertimos el puntero a constante de caracteres sin signo
	unsigned char	ch = character; // Convertimos el carácter a un carácter sin signo
	
	// Recorremos los primeros 'n' bytes de la memoria
	for (size_t i = 0; i < n; ++i) 
	{
		// Si encontramos el carácter, retornamos la dirección de memoria donde lo encontramos
		if (*ptr == ch) 
		{
			return (void *)ptr;
		}
		ptr++; // Movemos el puntero al siguiente byte
	}

	// Si no encontramos el carácter dentro de los primeros 'n' bytes, retornamos NULL
	return NULL;
}
