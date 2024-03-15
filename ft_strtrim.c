#include "libft.h"

//Comparas uno a uno el set con la str: si coincide, no lo escribes y saltas al siguiente
//y si NO coincide, lo escribe y pasa al siguiente. 

/**
 * Recibe un caracter y un array de caracteres
 * Devuelve 1 si lo contiene, 0 si no
*/
static int	char_in_set(char c, char const *set)
{
	int j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0')
	{
		if (!char_in_set(s1[start], set))
			break;
		start++;
	}
	while (end >= 0)
	{
		if (!char_in_set(s1[end], set))
			break;
		end--;
	}
	return (ft_substr(s1, start, end - start + 1));
}

// int main()
// {
// 	printf("%s\n", ft_strtrim("*_a-n-a*_", "*_-"));
// 	printf("a-n-a\n");
// }
