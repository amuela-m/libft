#include <stdio.h>
#include <stdlib.h> // Para malloc
#include <string.h> // Para strlen

/*
Se utiliza para duplicar una cadena de caracteres en memoria dinámica.
Esta función toma una cadena de caracteres (src) como argumento 
y devuelve un puntero a una nueva cadena que es una copia exacta de src, almacenada en memoria dinámica.

Puedes probar esta función utilizando diferentes cadenas de caracteres como entrada 
y verificar si la cadena duplicada generada por ft_strdup es igual a la cadena original. 
También debes asegurarte de liberar la memoria asignada usando free una vez que hayas terminado de usar 
la cadena duplicada para evitar fugas de memoria.
*/

char *ft_strdup(const char *src) 
{
    // Primero, obtenemos la longitud de la cadena fuente
    size_t len = strlen(src) + 1; // +1 para incluir el carácter nulo
    
    // Luego, asignamos memoria suficiente para la nueva cadena
    char *dst = malloc(len * sizeof(char));
    
    // Si la asignación de memoria falla, retornamos NULL
    if (dst == NULL)
        return NULL;

    // Copiamos la cadena fuente en la nueva memoria asignada
    strcpy(dst, src);
    
    // Retornamos el puntero a la nueva cadena duplicada
    return dst;
}

int main(void) 
{
    // Cadena de caracteres original
    const char *original = "Hola, mundo!";
    
    // Duplicamos la cadena usando ft_strdup
    char *duplicado = ft_strdup(original);
    
    // Verificamos si la duplicación fue exitosa
    if (duplicado != NULL) {
        printf("La cadena original es: %s\n", original);
        printf("La cadena duplicada es: %s\n", duplicado);
        
        // Liberamos la memoria asignada para el duplicado
        free(duplicado);
    } else {
        printf("La duplicación de la cadena falló.\n");
    }

    return 0;
}