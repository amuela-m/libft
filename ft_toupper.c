/*
DESCRIPCIÓN
       Estas funciones comprueban si c, que debe tener el valor de un unsigned char o EOF, cae
       dentro de una cierta clase de caracteres de acuerdo con la localización en curso.

toupper()
        Convierte la letra minúscula a mayúscula, si es posible. 



VALOR DEVUELTO
       El valor devuelto es la letra "convertida", o c si no se pudo realizar la conversión.

FALLOS
       Hay que tener en cuenta que los detalles de qué es mayúscula o minúscula dependen de cada
       lengua concreta.  Por ejemplo, en la localización "C" por omisión no existe la letra
       "umlaut", por lo que no se le aplica conversión.

       En algunas localizaciones no inglesas existen letras minúsculas que no tienen su corre‐
       spondiente letra mayúscula; por ejemplo la s aguda alemana.
*/