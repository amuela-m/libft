#include "libft.h"

char *ft_strjoin(char const *str1, char const *str2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (NULL);
	newstr = ft_calloc(ft_strlen(str1) + ft_strlen(str2) + 1, sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (str1[j] != '\0')
	{
		newstr[i] = str1[j];
		j++;
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		newstr[i] = str2[j];
		j++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// int	main()
// {
// 	printf("%s\n", ft_strjoin("abcde", "fghij"));
// }