#include "libft.h"

char	*ft_strdup(const char *src) 
{
	char	*ptr;
	size_t	i;

    i = 0;
	ptr = malloc(ft_strlen(src) + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < ft_strlen(src))
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
