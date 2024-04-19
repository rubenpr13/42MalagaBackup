/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben-dev <ruben-dev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:43:24 by ruben-dev         #+#    #+#             */
/*   Updated: 2024/04/18 14:54:04 by ruben-dev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strrchr(const char *s, int c)
{
	char			mod_c;
	char			*res;
	unsigned int	i;

	mod_c = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (mod_c == s[i])
			res = ((char *) &s[i]);
		i++;
	}
	if (s[i] == mod_c)
		res = ((char *) &s[i]);
	return (res);
}
