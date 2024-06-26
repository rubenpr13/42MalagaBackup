/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:05:38 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 13:55:22 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int letter)
{
	if (letter >= 'A' && letter <= 'Z')
	{
		return (letter + 32);
	}
	return (letter);
}
