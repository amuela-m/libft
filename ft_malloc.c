#include <stdio.h>
#include <string.h>

/*
MALLOC: es la supervisora que prevee lo que necesitas. Ejemplo: necesito para el turno de guardia 3 quirófanos, 6 enfermeros. 
El tamaño total de la memoria que vas a reservar. 
Se utiliza para asignar memoria dinámicamente durante la ejecución del programa. 
En otras palabras, te permite reservar un bloque de memoria de un tamaño específico en el montón (heap). 
Este bloque de memoria puede ser utilizado para almacenar datos según sea necesario por tu programa.
La función malloc toma un parámetro size que indica la cantidad de memoria que se debe asignar en bytes. 
Retorna un puntero void que apunta al inicio de la memoria asignada en el heap.
Es importante tener en cuenta que esta es solo una implementación conceptual y simplificada de malloc. 
En realidad, malloc realiza una serie de operaciones para encontrar un bloque de memoria libre lo suficientemente grande 
como para acomodar la cantidad solicitada de memoria, y también realiza la gestión de la memoria para seguir 
el control de los bloques de memoria asignados y liberados.
Además, la biblioteca estándar de C proporciona una implementación de malloc mucho más robusta y eficiente. 
Esta implementación se encuentra en la biblioteca estándar de C y se puede utilizar incluyendo la cabecera stdlib.h 
en tu programa.
*/

#include <stdlib.h> // Para el prototipo de malloc

void *malloc(size_t size) {
    // Intenta asignar 'size' bytes de memoria en el heap
    void *ptr = /* lógica para asignar memoria */;
    
    // Verifica si la asignación de memoria fue exitosa
    if (ptr == NULL) {
        // Si la asignación falla, devuelve NULL
        return NULL;
    } else {
        // Si la asignación es exitosa, devuelve un puntero al inicio de la memoria asignada
        return ptr;
    }
}
