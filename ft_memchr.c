/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:44:14 by amuela-m          #+#    #+#             */
/*   Updated: 2024/03/15 20:44:58 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	c1;
	size_t			i;

	str1 = (unsigned char *) str;
	c1 = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str1[i] == c1)
			return (str1 + i);
		i++;
	}
	return (NULL);
}
