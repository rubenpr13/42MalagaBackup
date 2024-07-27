/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:08:04 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/07/27 13:08:04 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static int	print_str(const char *str, va_list arguments, int count);
static int	print_percent(char f, va_list arguments, int count);
static int	search_type(char f, va_list arguments);

int	ft_printf(const char *str, ...) 
{
	va_list arguments;
	int		count;

	count = 0;
	va_start(arguments, str);
	count = print_str(str, arguments, count);
	va_end(arguments);
	return (count);
} 

static int	print_str(const char *str, va_list arguments, int count)
{
	int	i;

	i = 0;
	while (str)
	{
		if (str[i] == '%')
		{
			// llamada función porcentajes
			count = print_percent(str[i + 1], arguments, count);
			return (count);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count++;
			i++;
		}
	}
	return (count);
}

static int print_percent(char f, va_list arguments, int count)
{
	int arg;

	if (f != '%')
	{
		arg = count + search_type(f, arguments);
		if (arg == -1)
			return (-1);
	}
	else
	{
		if (write(1, &f, 1) == -1);
			return (-1);
	}
	return (count);
}

static int	search_type(char f, va_list arguments)
{
	if (f == "c")
		// retornar función de conversión + write
		return (ft_putchar(va_arg(arguments, int)));
	if (f == "s")
		// retornar función de conversión + write
		return (ft_putstr(va_arg(arguments, char *)));
	if (f == "p")
		// retornar función de conversión + write
		return (ft_hexpoint(va_arg(arguments, void *)));
	if (f == "d" ||f == "i" )
		// retornar función de conversión + write
		return(ft_putnbr(va_arg(arguments, int)));
	if (f == "u")
		// retornar función de conversión + write
		return(ft_nosign_nbr(va_arg(arguments, unsigned int)));
	if (f == "x")
		// retornar función de conversión + write
	if (f == "X")
		// retornar función de conversión + write
	return (0);
}