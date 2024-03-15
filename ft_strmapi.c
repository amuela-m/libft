#include "libft.h"

/**
 * Itera por cada una de las letras de la palabra y ejecuta la funcion 'f'
 * almacenando el resultado en una nueva string.
*/
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	if (str == NULL || f == NULL)
		return (NULL);
	result = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		result[i] = (*f)(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	func(unsigned int index, char c)
// {
// 	(void)index;
// 	return (ft_tolower(c));
// }

// char	func2(unsigned int index, char c)
// {
// 	(void)index;
// 	return (ft_toupper(c));
// }

// int main()
// {
// 	char str[] = "HOLA que TAL";

// 	printf("%s\n", ft_strmapi(str, func));
// 	printf("%s\n", ft_strmapi(str, func2));
// }
