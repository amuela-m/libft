#include <stdlib.h> // Para malloc y free
#include <string.h> // Para strlen y strchr

/*
Divide una cadena en partes iguales. 
Esta función split toma una cadena de caracteres str, un carácter delimitador delimiter 
y un puntero a un tamaño num_tokens, que se utilizará para almacenar el número de partes en las que se ha dividido la cadena. 
Retorna un array de punteros a cadenas que representan las partes de la cadena dividida.
Por ejemplo, si tenemos la cadena "Hola,mundo,amigo" y usamos la función split con el delimitador ',', 
obtendremos un array con tres elementos: "Hola", "mundo" y "amigo".
Es como si tuvieras una frase larga y quisieras dividirla en palabras más pequeñas basadas en espacios entre ellas. 
La función split te permite hacer eso, dividiendo una cadena en partes más pequeñas usando un delimitador específico.
*/

char **split(const char *str, char delimiter, size_t *num_tokens) 
{
    size_t str_length = strlen(str);
    size_t num_delimiters = 0;

    // Contamos el número de delimitadores en la cadena
    for (size_t i = 0; i < str_length; ++i) 
    {
        if (str[i] == delimiter) 
        {
            num_delimiters++;
        }
    }

    // Calculamos el número de tokens (partes) que tendrá la cadena dividida
    *num_tokens = num_delimiters + 1;

    // Asignamos memoria para el array de punteros a cadenas
    char **tokens = (char **)malloc((*num_tokens) * sizeof(char *));
    if (tokens == NULL) {
        return NULL; // Si malloc falla, retornamos NULL
    }

    size_t token_index = 0;
    size_t token_start = 0;

    // Recorremos la cadena para encontrar los delimitadores y dividirla en tokens
    for (size_t i = 0; i <= str_length; ++i) 
    {
        if (str[i] == delimiter || str[i] == '\0') 
        {
            // Calculamos la longitud del token actual
            size_t token_length = i - token_start;

            // Asignamos memoria para el token actual y copiamos los caracteres
            tokens[token_index] = (char *)malloc((token_length + 1) * sizeof(char));
            if (tokens[token_index] == NULL) 
            {
                // Si malloc falla, liberamos la memoria asignada previamente y retornamos NULL
                for (size_t j = 0; j < token_index; ++j) 
                {
                    free(tokens[j]);
                }
                free(tokens);
                return NULL;
            }
            strncpy(tokens[token_index], str + token_start, token_length);
            tokens[token_index][token_length] = '\0';

            // Movemos el índice de inicio del próximo token
            token_start = i + 1;
            token_index++;
        }
    }

    return tokens;
}
