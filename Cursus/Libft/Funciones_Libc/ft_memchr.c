/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben-dev <ruben-dev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:12:48 by ruben-dev         #+#    #+#             */
/*   Updated: 2024/04/18 15:57:01 by ruben-dev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	mod_c;
	unsigned char	*mod_s;
	size_t			i;

	mod_c = (char) c;
	mod_s = (char *) s;
	i = 0;

	while (i < n)
	{
		if (mod_c == mod_s[i])
			return ((void *) &mod_s[i]);
		i++;
	}
	return (NULL);
}