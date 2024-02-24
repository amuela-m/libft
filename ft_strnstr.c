#include <stddef.h> // Para NULL
#include <string.h> // Para strlen

/*
Imagina que tienes dos cuadernos llenos de dibujos y quieres encontrar un dibujo específico en uno de ellos, 
pero solo quieres buscar en los primeros dibujos del cuaderno.
La función strnstr hace eso. Le dices a strnstr qué dibujo estás buscando y cuántos dibujos quieres revisar. 
Entonces, strnstr busca en los primeros dibujos del cuaderno y te dice si encuentra el dibujo que estás buscando.
Es como si le pidieras a alguien que buscara un dibujo específico en los primeros dibujos que ve en tu cuaderno de dibujos. 
Si lo encuentra, te lo dice. Si no, te dice que no lo encontró.
Entonces, strnstr te ayuda a buscar una cadena de dibujos dentro de otra cadena de dibujos, 
pero solo en los primeros n dibujos de esa cadena. ¡Es muy útil cuando solo quieres buscar en una parte de una cadena!
*/

char *strnstr(const char *haystack, const char *needle, size_t len) 
{
    size_t needle_len = strlen(needle); // Obtenemos la longitud de la subcadena a buscar
    
    // Si la subcadena a buscar está vacía, retornamos el puntero al principio de la cadena principal
    if (*needle == '\0') 
    {
        return (char *)haystack;
    }
    
    // Recorremos la cadena principal mientras haya suficiente longitud para buscar la subcadena
    while (*haystack != '\0' && len >= needle_len) 
    {
        // Si encontramos la subcadena en la posición actual, retornamos un puntero a esa posición
        if (strncmp(haystack, needle, needle_len) == 0) 
        {
            return (char *)haystack;
        }
        haystack++; // Movemos el puntero al siguiente carácter
        len--; // Disminuimos la cantidad de caracteres restantes
    }
    
    // Si no encontramos la subcadena dentro de los primeros 'len' caracteres, retornamos NULL
    return NULL;
}
