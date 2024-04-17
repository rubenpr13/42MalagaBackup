/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:31:41 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/02/06 15:43:29 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	x;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		x = str[i - 1];
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((x < 65) || (x > 90 && x < 97) || (x > 122))
				str[i] = str[i] - 32;
			if (x >= '0' && x <= '9')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
