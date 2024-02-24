#include <stdlib.h> // Para malloc y free
#include <string.h> // Para strlen

/*
La función substr toma una cadena de caracteres (str), un índice de inicio (start) y una longitud (length). 
Retorna una nueva cadena de caracteres que representa la porción de la cadena original comenzando desde el índice de inicio 
y teniendo la longitud especificada.
Por ejemplo, si tenemos la cadena "Hola mundo", después de aplicar substr("Hola mundo", 5, 5), 
obtendríamos la subcadena "mundo".
Es como si tuvieras una barra de chocolate y quisieras tomar solo una parte de ella. 
La función substr te permite hacer eso con las cadenas de caracteres: ¡tomar solo una porción de una cadena más grande!
*/

char *substr(const char *str, size_t start, size_t length) {
    size_t str_length = strlen(str);
    
    // Verificamos si el índice de inicio está dentro de los límites de la cadena
    if (start >= str_length) {
        return NULL; // Si el índice de inicio está fuera de la cadena, retornamos NULL
    }
    
    // Calculamos la longitud de la subcadena a extraer
    size_t sub_length = (start + length > str_length) ? (str_length - start) : length;
    
    // Asignamos memoria para la nueva subcadena, más 1 byte adicional para el carácter nulo
    char *substr = (char *)malloc((sub_length + 1) * sizeof(char));
    if (substr == NULL) {
        return NULL; // Si malloc falla, retornamos NULL
    }
    
    // Copiamos la subcadena de la cadena original a la nueva subcadena
    strncpy(substr, str + start, sub_length);
    substr[sub_length] = '\0'; // Aseguramos que la nueva subcadena esté terminada con el carácter nulo
    
    return substr; // Retornamos la nueva subcadena
}
