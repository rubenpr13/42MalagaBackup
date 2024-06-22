/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:16:52 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/06/22 14:30:14 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*temp;
	size_t	i;

	temp = malloc(ft_strlen(s) * sizeof(char));
	i = 0;
	if (!temp)
		return (NULL);
	while (i < (size_t)ft_strlen(s))
	{
		temp[i] = (*f)(i, s[i]);
		i++;
	}
	temp[i] = 0;
	return (temp);
}
