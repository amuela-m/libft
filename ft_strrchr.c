#include <stdio.h>
#include <string.h>

/*
Busca la última vez que aparece una letra específica en una cadena. 
Por ejemplo, si usas strrchr("perro", 'r'), te dará la ubicación de la última 'r' en la palabra "perro".
*/

char *strrchr(const char *str, int character) {
    const char *last_occurrence = NULL; // Inicializamos un puntero para guardar la última ocurrencia
    
    // Recorremos la cadena hasta encontrar el final (carácter nulo '\0')
    while (*str != '\0') {
        if (*str == character) { // Si encontramos el carácter buscado
            last_occurrence = str; // Guardamos la dirección de memoria de esta ocurrencia
        }
        str++; // Movemos el puntero a la siguiente posición de la cadena
    }
    
    // Si encontramos el carácter, devolvemos la dirección de memoria de su última ocurrencia
    // Si no, devolvemos NULL
    return (char *)last_occurrence;
}
