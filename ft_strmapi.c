#include <stdlib.h> // Para malloc y free
#include <string.h> // Para strlen

/*
La función strmapi toma una cadena de caracteres (str) y una función (f) como argumentos. 
Retorna una nueva cadena de caracteres que es el resultado de aplicar la función f a cada carácter de la cadena original.
Por ejemplo, podríamos tener una función f que convierta cada carácter en su versión mayúscula. 
Al llamar a strmapi("hola", &toupper), obtendríamos la cadena "HOLA".
Es como si tuvieras una caja llena de letras y quisieras cambiar cada letra de una manera especial. 
La función strmapi te permite hacer eso: aplicar una operación a cada letra de una cadena 
y obtener una nueva cadena con los resultados.
*/

char *strmapi(const char *str, char (*f)(unsigned int, char)) 
{
    size_t len = strlen(str);
    
    // Asignamos memoria para la nueva cadena, más 1 byte adicional para el carácter nulo
    char *result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL) 
    {
        return NULL; // Si malloc falla, retornamos NULL
    }
    
    // Aplicamos la función 'f' a cada carácter de la cadena original y almacenamos el resultado en la nueva cadena
    for (size_t i = 0; i < len; ++i) 
    {
        result[i] = (*f)(i, str[i]);
    }
    
    result[len] = '\0'; // Aseguramos que la nueva cadena esté terminada con el carácter nulo
    
    return result; // Retornamos la nueva cadena
}
