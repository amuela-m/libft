#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
    unsigned char *s;
    size_t  i;

    if (!dest && !src)
        return (dest);
    d = (char *) dest;
    s = (unsigned char *) src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}
