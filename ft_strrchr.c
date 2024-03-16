/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:55:25 by amuela-m          #+#    #+#             */
/*   Updated: 2024/03/15 20:55:28 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
