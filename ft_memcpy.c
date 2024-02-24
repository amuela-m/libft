#include <stddef.h> // Para size_t

/*
Imagina que tienes una caja de juguetes y quieres hacer una copia exacta de algunos de ellos en otra caja.
La función memcpy hace eso. Le dices a memcpy qué juguetes quieres copiar, cuántos juguetes hay en total 
y cuál es el tamaño de cada juguete.
Entonces, memcpy toma los juguetes que le dijiste y hace una copia exacta de ellos en otra caja. 
¡Es como si creara clones de tus juguetes favoritos!
Es muy útil cuando quieres tener dos copias idénticas de algo, como dos osos de peluche iguales, 
para que puedas jugar con uno y guardar el otro en otro lugar seguro. ¡Es como duplicar tus juguetes favoritos!
*/

void *ft_memcpy(void *dest, const void *src, size_t n) 
{
    char *d = dest; // Convertimos el puntero de destino a un puntero de caracteres
    const char *s = src; // Convertimos el puntero de origen a un puntero de caracteres constante
    
    // Copiamos byte por byte desde la dirección de origen a la dirección de destino
    for (size_t i = 0; i < n; ++i) 
    {
        d[i] = s[i];
    }
    
    return dest; // Retornamos el puntero de destino
}