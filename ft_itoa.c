#include <stdio.h> // Para sprintf y snprintf
#include <stdlib.h> // Para malloc

/*
Toma un número entero y lo convierte en una cadena de caracteres. 
La función snprintf se utiliza para calcular cuántos dígitos serán necesarios para representar el número. 
Luego, se asigna memoria para la cadena resultante y se utiliza sprintf para realizar la conversión del número a una cadena.
Por ejemplo, si llamamos itoa(123) nos devolverá la cadena "123".
Es como si tuvieras un número y quisieras escribirlo como una cadena. 
La función itoa te permite hacer exactamente eso, 
convirtiendo el número en una secuencia de caracteres que puedes usar en una cadena de texto.
*/

char *itoa(int num) 
{
	// Calculamos el tamaño máximo de la cadena necesaria para representar el número
	// Incluyendo espacio adicional para el signo y el carácter nulo
	int	digits = snprintf(NULL, 0, "%d", num); //!!! Revisa este codigo que no puedes usar esta funcion!

	// Asignamos memoria para la nueva cadena
	char *str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL) 
	{
		return NULL; // Si malloc falla, retornamos NULL
	}
	
	// Convertimos el número a una cadena
	sprintf(str, "%d", num);
	
	return str; // Retornamos la nueva cadena
}
