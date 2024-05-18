/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:54:34 by amuela-m          #+#    #+#             */
/*   Updated: 2024/05/18 17:54:35 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	c1;

	i = 0;
	c1 = (char) c;
	while (i < ft_strlen(s))
	{
		if (s[i] == c1)
			return ((char *) &s[i]);
		i++;
	}
	if (c1 == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
