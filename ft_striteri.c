#include <stdlib.h> // Para malloc
#include <ctype.h> // Para toupper
#include <string.h> // Para strlen

/*
Realiza una búsqueda insensible a mayúsculas y minúsculas de una subcadena en una cadena de texto, 
comenzando desde un índice específico.
Por ejemplo, podríamos buscar la subcadena "world" en la cadena "Hello World!", 
comenzando desde el índice 7 (que apunta al espacio antes de "World"). 
La llamada sería algo como striteri("Hello World!", "world", 7).
Es como si tuvieras una lista de nombres y quisieras buscar un nombre específico, 
pero no estás seguro de si las letras están escritas en mayúsculas o minúsculas. 
La función striteri te permitiría buscar de todos modos, sin importar cómo estén escritas las letras.
*/

char *striteri(const char *haystack, const char *needle, size_t start) 
{
    size_t haystack_len = strlen(haystack);
    size_t needle_len = strlen(needle);
    
    // Si el índice de inicio está fuera del rango de la cadena, retornamos NULL
    if (start >= haystack_len) 
    {
        return NULL;
    }
    
    // Avanzamos el puntero de inicio hasta la posición especificada
    const char *p = haystack + start;
    
    // Realizamos la búsqueda de subcadena insensible a mayúsculas y minúsculas
    while (*p != '\0' && (p + needle_len - 1) < (haystack + haystack_len)) 
    {
        const char *haystack_ptr = p;
        const char *needle_ptr = needle;
        while (*needle_ptr != '\0' && tolower(*haystack_ptr) == tolower(*needle_ptr)) 
        {
            haystack_ptr++;
            needle_ptr++;
        }
        if (*needle_ptr == '\0') 
        {
            return (char *)p; // Si encontramos la subcadena, retornamos un puntero a la posición de inicio
        }
        p++; // Movemos el puntero al siguiente carácter en la cadena de búsqueda
    }
    
    return NULL; // Si no encontramos la subcadena, retornamos NULL
}
