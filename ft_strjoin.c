#include <stdlib.h> // Para malloc y free
#include <string.h> // Para strlen y strcpy

/*
La función strjoin toma dos cadenas de caracteres (str1 y str2) como entrada 
y devuelve una nueva cadena que es el resultado de concatenar str1 y str2.
Aquí hay una explicación sencilla:
Imagina que tienes dos piezas de un rompecabezas, una que tiene la primera mitad de una imagen 
y otra que tiene la segunda mitad. Quieres unirlas para formar la imagen completa.
La función strjoin hace eso con cadenas de caracteres. 
Toma dos partes de una frase y las une para hacer una frase completa.
Es como si tomaras "Hola" y "mundo" y los unieras para formar "Hola mundo". 
La función strjoin hace exactamente eso. Toma dos pedazos de palabras y los pega juntos para hacer una nueva palabra. 
¡Es muy útil cuando quieres combinar partes de frases en una sola!
*/

char *strjoin(const char *str1, const char *str2) 
{
    // Obtenemos la longitud total de la nueva cadena sumando las longitudes de las cadenas de entrada
    size_t len_str1 = strlen(str1);
    size_t len_str2 = strlen(str2);
    size_t len_total = len_str1 + len_str2;
    
    // Asignamos memoria para la nueva cadena, más 1 byte adicional para el carácter nulo
    char *result = (char *)malloc((len_total + 1) * sizeof(char));
    if (result == NULL) 
    {
        return NULL; // Si malloc falla, retornamos NULL
    }
    
    // Copiamos la primera cadena en la nueva cadena
    strcpy(result, str1);
    
    // Concatenamos la segunda cadena al final de la nueva cadena
    strcat(result, str2);
    
    return result; // Retornamos la nueva cadena resultante
}