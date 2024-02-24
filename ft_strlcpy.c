#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

int	main()
{
	char test1[30];
	char test2[2];
	char test3[0];

	ft_strlcpy(test1, "hola que tal", 13);
	printf("%s\n", test1);

	ft_strlcpy(test2, "hola que tal", 13);
	printf("%s\n", test2);

	ft_strlcpy(test3, "hola que tal", 0);
	printf("%s\n", test3);
}