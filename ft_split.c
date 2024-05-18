/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuela-m <amuela-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:54:28 by amuela-m          #+#    #+#             */
/*   Updated: 2024/05/18 17:54:30 by amuela-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		count;
	size_t	i;

	count = 1;
	i = 0;
	if (s[0] == c || s[0] == '\0')
		count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static char	*store_word(const char *s, char c)
{
	size_t	i;
	size_t	size;
	char	*result;

	size = 0;
	i = 0;
	while (s[size] != '\0' && s[size] != c)
		size++;
	result = ft_calloc(size + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static void	ft_free(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
	result = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	words = count_words(s, c);
	result = ft_calloc((words + 1), sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		result[i] = store_word(s, c);
		if (!result[i])
			return (ft_free(result, words), NULL);
		s = ft_strchr(s, c);
		i++;
	}
	return (result);
}
