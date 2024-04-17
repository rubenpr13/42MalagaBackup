/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:15:29 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/01/30 13:10:29 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_character(char c)
{
	write(1, &c, 1);
}

void	print_combination(char a, char b, char c)
{
	print_character(a + '0');
	print_character(b + '0');
	print_character(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	print_character(',');
	print_character(' ');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_combination(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb();
	return(0);
}
