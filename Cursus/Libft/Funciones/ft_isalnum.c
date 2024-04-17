/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:40:41 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/17 18:45:48 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int val)
{
	if (val >= '0' && val <= '9')
	{
		return (1);
	}
	if ((val >= 'a' && val <= 'z') || (val >= 'A' && val >= 'Z'))
	{
		return (1);
	}
	return (0);
}
