/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben-dev <ruben-dev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:02:55 by ruben-dev         #+#    #+#             */
/*   Updated: 2024/04/18 14:49:50 by ruben-dev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strchr(const char *s, int c)
{
	char			mod_c;
	unsigned int	i;

	mod_c = (char) c;
	i = 0;
	if (mod_c == '\0')
		return ('\0');

	while (s[i] != '\0')
	{
		if (mod_c == s[i])
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	return (0);
}
