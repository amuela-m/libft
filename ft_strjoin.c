/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:54:49 by amuela-m          #+#    #+#             */
/*   Updated: 2024/05/18 17:54:51 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (NULL);
	newstr = ft_calloc(ft_strlen(str1) + ft_strlen(str2) + 1, sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (str1[j] != '\0')
	{
		newstr[i] = str1[j];
		j++;
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
		newstr[i++] = str2[j++];
	newstr[i] = '\0';
	return (newstr);
}
