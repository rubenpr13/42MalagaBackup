/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:12:21 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/06/22 12:53:52 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return ((char *)dest);
}

static size_t	pos_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static size_t	pos_finish(const char *s1, const char *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len]))
		len--;
	return (len--);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	finish;
	size_t	len_trimmed;
	char	*temp;

	start = pos_start(s1, set);
	finish = pos_finish(s1, set);
	len_trimmed = finish - start - 1;
	temp = (char *)malloc(len_trimmed * sizeof(char));
	if (!temp)
		return (NULL);
	strncpy((char *)temp, (char *)s1 + start, len_trimmed);
	temp[len_trimmed - 1] = 0;
	return ((char *)temp);
}
