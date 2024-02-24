#include <stdlib.h> // Para malloc y free
#include <ctype.h> // Para isspace

/*
Esta función strtrim elimina los espacios en blanco al principio y al final de una cadena de caracteres. 
Devuelve una nueva cadena de caracteres que contiene la versión recortada de la cadena de entrada.
Por ejemplo, si tenemos la cadena " Hola mundo ", después de aplicar strtrim, obtendríamos la cadena "Hola mundo".
Es como si tuvieras una caja de juguetes y quisieras quitar todas las almohadas 
y mantas extra que están alrededor de tus juguetes. 
¡La función strtrim hace lo mismo pero con los espacios en blanco en una cadena de texto!
*/

char *strtrim(const char *str) 
{
    if (str == NULL) 
    {
        return NULL; // Si la cadena de entrada es NULL, retornamos NULL
    }
    
    size_t len = strlen(str);
    size_t start = 0;
    size_t end = len - 1;
    
    // Buscamos el índice del primer carácter que no sea un espacio en blanco
    while (isspace(str[start])) 
    {
        start++;
    }
    
    // Buscamos el índice del último carácter que no sea un espacio en blanco
    while (end > start && isspace(str[end])) 
    {
        end--;
    }
    
    // Calculamos la longitud de la nueva cadena sin los espacios en blanco al principio y al final
    size_t new_len = end - start + 1;
    
    // Asignamos memoria para la nueva cadena, más 1 byte adicional para el carácter nulo
    char *trimmed_str = (char *)malloc((new_len + 1) * sizeof(char));
    if (trimmed_str == NULL) 
    {
        return NULL; // Si malloc falla, retornamos NULL
    }
    
    // Copiamos la parte no espaciada de la cadena original a la nueva cadena
    strncpy(trimmed_str, str + start, new_len);
    trimmed_str[new_len] = '\0'; // Aseguramos que la nueva cadena esté terminada con el carácter nulo
    
    return trimmed_str; // Retornamos la nueva cadena sin los espacios en blanco al principio y al final
}
