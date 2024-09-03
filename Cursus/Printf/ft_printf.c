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
static int print_percent(const char *str, va_list arguments, int count, int i);
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
			count = print_percent(str, arguments, count, i);
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

static int print_percent(const char *str, va_list arguments, int count, int i)
{
	int arg;

	if (str[i + 1] != '%')
	{
		arg = count + search_type(str[i + 1], arguments);
		if (arg == -1)
			return (-1);
	}
	else
	{
		if (write(1, &str[i], 1) == -1);
			return (-1);
	}
	return (count);
}

static int	search_type(char f, va_list arguments)
{
	if (f == 'c')
		// retornar función de conversión + write
		return (ft_putchar(va_arg(arguments, int)));
	if (f == 's')
		// retornar función de conversión + write
		return (ft_putstr(va_arg(arguments, char *)));
	if (f == 'p')
		// retornar función de conversión + write
		return (ft_hexpoint(va_arg(arguments, void *)));
	if (f == 'd' || f == 'i' )
		// retornar función de conversión + write
		return(ft_putnbr(va_arg(arguments, int)));
	if (f == 'u')
		// retornar función de conversión + write
		return(ft_nosign_nbr(va_arg(arguments, unsigned int)));
	if (f == 'x')
		// retornar función de conversión + write
		return (ft_hex_minus(va_arg(arguments, int)));
	if (f == 'X')
		// retornar función de conversión + write
		return (ft_hex_mayus(va_arg(arguments, int)));
	return (0);
}

int main () {
 	int	num;

	int ret1, ret2;
	// For character
	ret1 = ft_printf("Character: %c\n", 'A');
	ret2 = printf("Character: %c\n", 'A');
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n");
	/*// For string
	ret1 = ft_printf("String: %s\n", "Hello, World!");
	ret2 = printf("String: %s\n", "Hello, World!");
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n");
	// For pointer
	num = 10;
	ret1 = ft_printf("Pointer: %p\n", &num);
	ret2 = printf("Pointer: %p\n", &num);
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n");
	// For decimal (base 10)
	ret1 = ft_printf("Decimal: %d\n", 10000);
	ret2 = printf("Decimal: %d\n", 10000);
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n");
	// For integer
	ret1 = ft_printf("Integer: %i\n", -12345);
	ret2 = printf("Integer: %i\n", -12345);
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n");
	// For unsigned
	ret1 = ft_printf("Unsigned: %u\n", 12345);
	ret2 = printf("Unsigned: %u\n", 12345);
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n");
	// For hexadecimal (lowercase)
	ret1 = ft_printf("Hexadecimal (lowercase): %x\n", -1);
	ret2 = printf("Hexadecimal (lowercase): %x\n", -1);
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n");
	// For hexadecimal (uppercase)
	ret1 = ft_printf("Hexadecimal (uppercase): %X\n", 0x123abc);
	ret2 = printf("Hexadecimal (uppercase): %X\n", 0x123abc);
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n");
	// For percent
	ret1 = ft_printf("Percent: %%\n");
	ret2 = printf("Percent: %%\n");
	printf("ft_printf returned: %d, printf returned: %d\n", ret1, ret2);
	printf("-----------------------\n"); */
}