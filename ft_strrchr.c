#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	c1;

	i = ft_strlen(str);
	c1 = (char) c;
	while (i >= 0)
	{
		if (str[i] == c1)
			return ((char *) &str[i]);
		i--;
	}
	return (NULL);
}
