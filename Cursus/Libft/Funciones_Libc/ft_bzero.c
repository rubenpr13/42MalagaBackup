/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben-dev <ruben-dev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:26:14 by ruben-dev         #+#    #+#             */
/*   Updated: 2024/04/18 13:31:08 by ruben-dev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp_s;

	temp_s = (unsigned char *) s;
	while (n > 0)
	{
		*(temp_s++) = 0;
		n--;
	}
}
