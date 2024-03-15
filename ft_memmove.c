#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n) 
{
	char	*s;
	char	*d;

	if (dest == NULL && src == NULL && n > 0)
		return (NULL);
	s = (char *)src;
	d = (char *)dest;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
