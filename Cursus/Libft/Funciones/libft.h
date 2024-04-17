/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:25:06 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/17 19:09:53 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_isalnum(int val);
int		ft_isalpha(int val);
int		ft_isascii(int val);
int		ft_isdigit(int val);
int		ft_isprint(int val);
int		ft_strlen(const char *str);
int		ft_tolower(int letter);
int		ft_toupper(int letter);

#endif