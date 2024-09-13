/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:32:11 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/09/13 13:51:15 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	count_lines(fd);
static char	**fill_lines(int fd, char **buff, int num_lines);

int	get_next_line(int fd) 
{
	static char	**buff;
	int			num_lines;

	// gestión de errores de fd, buffersize y read
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		buff = NULL;
		return (NULL);
	}
	// contar lineas del archivo
	num_lines = count_lines(fd);
	//reservar memoria para cada línea 
	// y gestión de errores
	buff = malloc(num_lines * sizeof(char *) + 1);
	if (!buff)
		return (NULL);
	// rellenar con las líneas
	buff = fill_lines(fd, **buff, num_lines);
	return (buff);
}

static int	count_lines(fd)
{
	int		lines;
	int		i;
	char	*buffer;

	lines = 0;
	// reservar memoria y control de errores
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	// bucle para contar lineas del fd
	while (read(fd, buffer,BUFFER_SIZE ) > 0)
	{
		i = 0;
		while (i <= BUFFER_SIZE)
		{
			if (buffer[i] == '\n')
				lines++;
			i++;
		}
	}
	return (lines);
}

static char	**fill_lines(int fd, char **buff, int num_lines)
{
	int		i;
	int		x;
	int		b;
	char	*buffer;

	i = 0;
	x = 0;
	b = 0;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (i <= num_lines)
	{
	// Contar cuantos bits necesita cada línea para reservar la memoria en buff[i][x]
		while (read(fd, buffer, BUFFER_SIZE))
		{
			if (buffer[b] == '\n')

		}
	// reservar memoria para cada línea y gestionar fallos
	// copiar la línea de buffer[b] a buff[i][x]
	// escribir la línea
	// liberar memoria de la línea
	// pasar a la siguiente
 	}

	return (buff);
}
