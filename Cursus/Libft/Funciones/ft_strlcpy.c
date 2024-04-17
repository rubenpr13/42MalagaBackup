/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben-dev <ruben-dev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 00:09:39 by ruben-dev         #+#    #+#             */
/*   Updated: 2024/04/18 00:13:56 by ruben-dev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *org, char *dst, size_t sizedst)
{
	int	i;

	i = 0;
	while (org[i] != '\0')
		i++;
	if (sizedst >= i)
	{
		while (org[i] != '\0')
		{
			i = 0;
			org[i] = dst[i];
			i++;
		}
	}
	else
	{
		while (i < sizedst)
		{
			i = 0;
			org[1] = dst[i];
			i++;
		}
		dst[i] = '\0';
	}
}
