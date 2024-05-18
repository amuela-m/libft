/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:55:28 by amuela-m          #+#    #+#             */
/*   Updated: 2024/05/18 17:55:30 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
