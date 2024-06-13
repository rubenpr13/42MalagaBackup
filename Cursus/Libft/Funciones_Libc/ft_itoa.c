/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:18:23 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/05/14 12:18:23 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int 	i;
	int 	isNegative;
	char	*str;
	char	temp;

	i = 0;
	isNegative = 0;
	if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (n < 0)
	{
		isNegative = 1;
		n = -n;
	}
	while (n != 0)
	{
		temp = n % 10;
		str[i++] = temp + '0';
		n = n / 10;
	}
	if (isNegative)
		str[i++] = '-';
	str[i] = '\0';
	reverse(str, i);
	return (str);
}

static void	reverse(char *str, int lenght)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = lenght - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
