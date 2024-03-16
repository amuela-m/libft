/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:37:15 by amuela-m          #+#    #+#             */
/*   Updated: 2024/03/15 20:38:38 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int main(void)
// {
// 	char	str[] = "    		--12345";
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }

// int main()
// {
// 	printf("1, %d = %d\n", ft_atoi("0"), atoi("0"));
// 	printf("2, %d = %d\n", ft_atoi("42"), atoi("42"));
// 	printf("3, %d = %d\n", ft_atoi("4 2"), atoi("4 2"));
// 	printf("4, %d = %d\n", ft_atoi("-42"), atoi("-42"));
// 	printf("5, %d = %d\n", ft_atoi("--42"), atoi("--42"));
// 	printf("6, %d = %d\n", ft_atoi("+42"), atoi("+42"));//
// 	printf("7, %d = %d\n", ft_atoi("++42"), atoi("++42"));
// 	printf("8, %d = %d\n", ft_atoi("42hola"), atoi("42hola"));
// 	printf("9, %d = %d\n", ft_atoi("4hola2"), atoi("4hola2"));
// 	printf("10, %d = %d\n", ft_atoi("hola42"), atoi("hola42"));

// 	printf("%d = 42\n", ft_atoi("42"));
// 	printf("%d = -42\n", ft_atoi("-42"));
// 	printf("%d = 0\n", ft_atoi("--42"));
// 	printf("%d = 42\n", ft_atoi("+42"));//
// 	printf("%d = 0\n", ft_atoi("++42"));
// }