#include <stddef.h> // Para size_t

/*
Imagina que tienes una caja de juguetes y quieres reorganizarlos de manera que algunos de ellos estén en diferentes lugares.
La función memmove hace eso. Le dices a memmove qué juguetes quieres mover, 
cuántos juguetes hay en total y cuál es el tamaño de cada juguete.
Entonces, memmove agarra los juguetes que le dijiste y los mueve a las nuevas posiciones. 
Pero lo sorprendente es que, incluso si las nuevas posiciones están superpuestas con las posiciones originales, 
memmove puede hacerlo sin que los juguetes se dañen. Es como si tuvieras una máquina mágica que puede mover cosas sin que se rompan.
Es muy útil cuando quieres reorganizar cosas en tu habitación o cambiar el orden de las cosas en una lista. 
¡Es como tener un superpoder de mover cosas!
*/

void *memmove(void *dest, const void *src, size_t n) 
{
    char *d = dest; // Convertimos el puntero de destino a un puntero de caracteres
    const char *s = src; // Convertimos el puntero de origen a un puntero de caracteres constante
    
    // Si las direcciones de origen y destino se superponen y el origen está antes del destino,
    // se realiza la copia en orden inverso para evitar sobrescribir datos no copiados todavía.
    if (s < d && s + n > d) {
        for (size_t i = n; i > 0; --i) {
            d[i - 1] = s[i - 1];
        }
    } else {
        // En cualquier otro caso, simplemente copiamos byte por byte de manera normal.
        for (size_t i = 0; i < n; ++i) {
            d[i] = s[i];
        }
    }
    return dest; // Retornamos el puntero de destino
}
