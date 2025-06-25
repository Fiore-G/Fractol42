/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <figarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:31:29 by figarcia          #+#    #+#             */
/*   Updated: 2025/06/20 18:35:43 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	init_fractal(t_fractal *fractal, int argc, char **argv)
{
	fractal->x = 0;
	fractal->y = 0;
	fractal->color = 0xE4F6E8;
	fractal->zoom = 300;
	fractal->offset_x = -WIDTH / (2.0 * fractal->zoom);
	fractal->offset_y = -HEIGHT / (2.0 * fractal->zoom);
	fractal->max_iter = 100;
	if (argc == 4 && ft_strncmp(fractal->name, "julia", 5) == 0)
	{
		fractal->cx = ft_atof(argv[2]);
		fractal->cy = ft_atof(argv[3]);
	}
	else
	{
		fractal->cx = -0.8;
		fractal->cy = 0.156;
	}
}

void	init_mlx(t_fractal *fractal)
{
	fractal->mlx = mlx_init();
	fractal->window = mlx_new_window(fractal->mlx, WIDTH, HEIGHT, "Fract'ol");
	fractal->image = mlx_new_image(fractal->mlx, WIDTH, HEIGHT);
	fractal->img_addr = mlx_get_data_addr(fractal->image,
			&fractal->bits_per_pixel,
			&fractal->line_length,
			&fractal->endian);
}
