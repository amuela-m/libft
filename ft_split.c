#include "libft.h"

/*
1º - Funcion que me retorna el número de palabras:
 * Cuenta la cantidad de palabras en el string s separadas por el caracter c
 * Devuelve la cuenta
*/
static int	count_words(const char *s, char c)
{
	int	count;
	size_t	i;

	count = 1;
	i = 0;
	if (s[0] == c || s[0] == '\0')
		count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

/*
Función que te devuelve la copia de la palabra hasta el delimitador.
*/
static char	*store_word(const char *s, char c)
{
	size_t	i; //contador
	size_t	size; //tamaño de la palabra
	char	*result;

	size = 0;
	i = 0;
	while (s[size] != '\0' && s[size] != c) //aumenta i hasta que encuentra c (espacio).
		size++;
	result = ft_calloc(size + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static void	ft_free(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]); //libera el contenido
		i++;
	}
	free(result); //libera todo el contenedor
	result = NULL;
}

/*
2º - Hacer un malloc con el número de count que hemos sacado de la función anterior. 
Este número indica el número de strings que vamos a tener + 1 (que es el NULL) en nuestra lista. 
*/

char	**ft_split(const char *s, char c)
{
	char **result;
	int	words;
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	words = count_words(s, c);
	result = ft_calloc((words + 1), sizeof(char*));
	if (result == NULL)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		result[i] = store_word(s, c);
		if (!result[i])
			return (ft_free(result, words), NULL);
		s = ft_strchr(s, c);
		i++;
	}
	return (result);
}

// int main()
// {
// 	char **strs = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// 	int i = 0;
// 	while (strs[i] != NULL)
// 	{
// 		printf("|%s|\n", strs[i]);
// 		i ++;
// 	}

// 	// char **strs = ft_split("         hola", ' ');
// 	// printf("%s\n", strs[0]);
// 	// printf("%d\n", count_words("         hola", ' '));
// }
