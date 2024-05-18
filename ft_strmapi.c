/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:55:13 by amuela-m          #+#    #+#             */
/*   Updated: 2024/05/18 17:55:17 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	if (str == NULL || f == NULL)
		return (NULL);
	result = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		result[i] = (*f)(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
