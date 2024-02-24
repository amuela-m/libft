#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= strlen(dst))
		return (dstsize + strlen(src));
	c = strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (strlen(dst) + strlen(&src[d]));
}

int main(void)
{
    char    *dst;
    const char    *src;
    size_t  dstsize;

    dst = "hola";
    src = "pablo";
    dstsize = 2;
    printf("%zu\n", ft_strlcat(dst, src, dstsize));
    return(0);
}