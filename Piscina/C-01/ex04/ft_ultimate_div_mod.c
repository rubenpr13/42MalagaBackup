/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:02:39 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/01/31 12:06:10 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}
