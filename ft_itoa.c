/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:42:07 by amuela-m          #+#    #+#             */
/*   Updated: 2024/03/15 20:43:58 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getsize(int n)
{
	int	value;

	value = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		value = value + 1;
	}
	while (n >= 10)
	{
		n = n / 10;
		value = value + 1;
	}
	if (n < 10)
		value = value + 1;
	return (value);
}

static int	ft_elevate(int n)
{
	int	value;

	value = 1;
	while (n > 0)
	{
		value = value * 10;
		n--;
	}
	return (value);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	len = ft_getsize(n);
	result = ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(result, "-2147483648\0", 12));
	if (n < 0)
	{
		n = -n;
		result[i] = '-';
		i++;
	}
	while (i < len)
	{
		result[i] = (n / ft_elevate(len - i - 1)) + '0';
		n = n % ft_elevate(len - i - 1);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main() {
//     int num = 2147483647;
//     char *str = ft_itoa(num);
// 	printf("Número: %d\nCadena: %s\n", num, str);

//     return 0;
// }

// int	main()
// {
// 	printf("%d", ft_getsize(-2147483648));
// }