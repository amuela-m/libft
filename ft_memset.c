#include <string.h>
#include <stddef.h> // Para size_t

/*
¡Claro! La función memset es como tener una varita mágica que puede cambiar todos los juguetes 
en tu habitación a un tipo específico de juguete. Aquí tienes una explicación simple:
Imagina que tienes una caja de juguetes, pero quieres cambiar todos los juguetes a ser del mismo tipo, 
digamos, osos de peluche.
La función memset hace eso. Le dices a memset qué tipo de juguete quieres que todos sean, 
cuántos juguetes hay en total y cuál es el tamaño de cada juguete.
Entonces, memset va a través de la caja de juguetes y, como si fuera una varita mágica, 
cambia cada juguete a ser del tipo que le dijiste. Así que al final, todos los juguetes en tu caja serán osos de peluche.
Es como si convirtieras todos los juguetes en tu habitación en osos de peluche con solo un comando.
¡Es una forma muy útil de hacer que todos los juguetes sean iguales!
*/

void *memset(void *ptr, int value, size_t num) 
{
    unsigned char *p = ptr; // Convertimos el puntero a un puntero de caracteres sin signo
    
    // Recorremos los primeros 'num' bytes de la memoria apuntada por ptr
    for (size_t i = 0; i < num; ++i) 
    {
        *p = (unsigned char)value; // Establecemos el byte actual al valor especificado
        p++; // Movemos el puntero al siguiente byte
    }
    
    return ptr; // Retornamos el puntero original
}
