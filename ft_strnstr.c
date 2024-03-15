#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	l = 0;
	if (big == NULL && little == NULL)
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[b] != '\0' && b < len)
	{
		while (little[l] == big[b + l] && little[l] != '\0' && b + l < len)
			l++;
		if (little[l] == '\0')
			return ((char *)big + b);
		b++;
		l = 0;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s\n", strnstr("ACABA", "ACA", 3));
// }

// ACABA	4
//   ^^^^
// ABA\
//    ^

// ACAB A
//   ^^ ^
// ABA
//   ^
