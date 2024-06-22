/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:55:49 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/06/22 12:38:44 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char *s, char c)
{
	char	**res;
	size_t	i;
	int		j;
	int		s_word;

	init_var(i, j, s_word, res);
	if (!res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s_word < 0)
		{
			s_word = 1;
		}
		else if (s[i] == c || i == ft_strlen(s) || s_word >= 0)
		{
			res[j] = fill_word(s, s_word, i);
			if (!(res[j]))
				return (ft_free(res, j));
			s_word = -1;
			j++;
		}
		i++;
	}
	return (res);
}

static void	init_var(size_t i, int j, int s_word, char **res)
{
	i = 0;
	j = 0;
	s_word = 1;
	res = ft_calloc((w_count(s, c) + 1), sizeof(char *));
}

static int	w_count(char *s, char c)
{
	int	count;
	int	id;

	id = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && id == 0)
		{
			count++;
			id = 1;
		}
		else if (*s == c)
		{
			id = 0;
		}
		s++;
	}
	return (count);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static void	*ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}
