/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:16:52 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/06/25 16:58:05 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*temp;
	size_t	len;
	size_t	i;

	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	temp = malloc((len + 1) * sizeof(char *));
	i = 0;
	if (!temp)
		return (NULL);
	while (i < len)
	{
		temp[i] = (*f)(i, s[i]);
		i++;
	}
	temp[i] = 0;
	return (temp);
}
