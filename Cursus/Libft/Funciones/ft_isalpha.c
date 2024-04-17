/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:47:01 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/17 18:50:32 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int val)
{
	if (val >= 'a' && val <= 'z' || val >= 'A' && val <= 'Z')
	{
		return (val);
	}
	return (0);
}
