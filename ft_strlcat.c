/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:54:54 by amuela-m          #+#    #+#             */
/*   Updated: 2024/05/19 15:17:47 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (ft_strlen(dst) > dstsize)
		return (srclen + dstsize);
	destlen = ft_strlen(dst);
	if (dstsize < destlen)
		srclen += dstsize;
	else
		srclen += destlen;
	s = 0;
	while (src[s] != '\0' && ((destlen + 1 + s) < dstsize))
	{
		dst[destlen + s] = src[s];
		s++;
	}
	dst[destlen + s] = '\0';
	return (srclen);
}
