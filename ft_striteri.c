/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:53:28 by amuela-m          #+#    #+#             */
/*   Updated: 2024/03/15 20:53:30 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (str == NULL || f == NULL)
		return ;
	while (str[i] != '\0')
	{
		(*f)(i, str + i);
		i++;
	}
}
