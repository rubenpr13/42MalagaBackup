/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:58:59 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/12/10 15:51:00 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/mlx.h"
#include "../lib/libft.h"

int close_window(void *mlx)
{
    (void)mlx;
    exit(0);
}

int key_hook(int keycode, void *mlx)
{
    if (keycode == 53)
    {
        (void)mlx;
        exit(0);
    }
} 

int main ()
{
    void    *mlx;
    void    *win;

    mlx = mlx_init();
    win = mlx_new_window(mlx, 800, 600, "so_long");

    mlx_hook(win, 17, 0, close_window, mlx);
    mlx_key_hook(win, key_hook, mlx);

    mlx_loop(mlx);
    mlx_destroy_window(mlx, win);

    return (0);
}