/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben-dev <ruben-dev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:27:02 by ruben-dev         #+#    #+#             */
/*   Updated: 2024/04/18 15:50:33 by ruben-dev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mod_s1;
	unsigned char	*mod_s2;
	size_t			i;

	mod_s1 = (unsigned char *) s1;
	mod_s2 = (unsigned char *) s2;
	i = 0;
	while (n > i)
	{
		if (mod_s1[i] != mod_s2[i])
			return (mod_s1 - mod_s2);
		i++;
	}
	return (0);
}