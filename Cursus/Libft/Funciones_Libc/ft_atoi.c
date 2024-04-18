/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben-dev <ruben-dev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:04:24 by ruben-dev         #+#    #+#             */
/*   Updated: 2024/04/18 16:28:49 by ruben-dev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resultado;
	int	signo;
	int	i;

	resultado = 0;
	signo = 1;
	i = 0;

	while (isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		signo = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultado *= 10;
		resultado += str[i] - 48;
		i++;
	}
	resultado *= signo;
	return (resultado);
}

int	isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}