#include "libft.h"

/**
 * Itera por la palabra, ejecutando y cambiando cada una de las letras de esta.
 * La funcion no devuelve nada, modifica el valor del caracter.
*/
void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (str == NULL || f == NULL)
		return ;
	while (str[i] != '\0')
	{
		(*f)(i, str + i);
		i++;
	}
}

// void	func1(unsigned int index, char *c)
// {
// 	(void)index;
// 	(*c) = '*';
// }

// void	func2(unsigned int index, char *c)
// {
// 	(void)index;
// 	(*c) = ft_tolower(*c);
// }

// int main ()
// {
// 	char str[] = "HOLA que TAL";
// 	ft_striteri(str, func2);
// 	printf("%s\n", str);
// }
